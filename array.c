#include <stdio.h>
int i,j,n;
char dizi[50][50];
int main(int argc, char const *argv[])
{
    printf("sayi girin : ");
    scanf("%d", &n);
printf("\ncumle gir: ");

    for (i = 1; i <= n; i++)
    {
        for ( j = 1; j <= i; j++)
        {
            printf("x");
        }
        printf("\n");
    }
    
    return 0;
}
