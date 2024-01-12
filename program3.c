#include <stdio.h>

#define MAX_SIZE 100

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

void printFrequency(int arr[], int n) {
    printf("Sayi\tFrekans\n");

    for (int i = 0; i < n; i++) {
        int count = 1;

        while (i < n - 1 && arr[i] == arr[i + 1]) {
            count++;
            i++;
        }

        printf("%d\t%d\n", arr[i], count);
    }
}
int main() {
    int arr[] = {4, 2, 8, 2, 4, 9, 8, 6, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);

    printf("Sorted Array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printFrequency(arr, n);

    return 0;
}