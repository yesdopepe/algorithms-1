#include <stdio.h>
int input, i = 0, harfsayisi = 0;
char string[100], harf;

int main(int argc, char const *argv[])
{
    printf("istediginiz harfi girin : ");
    scanf("%c",&harf);
    getchar();
    printf("\ncumle gir: ");
       do
   {
    input = getchar();
    string[i] = input;
    if (input == harf)
    {
        harfsayisi++;
    }
    
i++;
   } while (input != '\n');
    
   printf("\ngirilen cumle : %s", string);
   printf("istenen harf sayisi : %d", harfsayisi);
    return 0;
}
