#include <stdio.h>
int num[] = {};
int yedicount = 0, ciftcarpim = 1, negatiftop = 0;
// negatif olanlarin toplami, cift sayilarin carpimi, 7 ye esit olanlarin adedi
int main(){
    for (int i = 0; i < 25; i++)
    {
        printf("sayi giriniz: ");
        scanf("%d", &num[i]);
    }
    for (int j = 0; j < 25; j++)
    {
        if(num[j] == 7){
        yedicount++;

        }
        if (num[j]%2 == 0)
        {
            ciftcarpim *= num[j];
        }
        
        if (num[j] < 0)
        {
            negatiftop += num[j];
        }
        
    }
    printf("\n negatif toplam: %d", negatiftop);
    printf("\n cift carpim: %d", ciftcarpim);
    printf("\n 7 sayisi: %d", yedicount);
    
}