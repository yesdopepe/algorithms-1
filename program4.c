#include <stdio.h>
int a[] = {3,4,1,23,4,6,7,8}, enb = 0, ienb = 0;
int main(){
for (int i = 0; i < sizeof(a)/sizeof(a[0]); i++)
    {

        if (a[i]> enb)
        {
            enb = a[i];
        }
        
    }
    for ( int j = 0; j < sizeof(a)/sizeof(a[0]); j++)
    {
        if (ienb < a[j] && a[j] != enb)
        {
            ienb = a[j];
        }}
        printf("%d \n", enb);
        printf("%d", ienb);
}