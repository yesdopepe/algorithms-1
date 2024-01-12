#include <stdio.h>
#include <math.h>
float a, b, c, x1, x2;
int main(){
printf("a girin: ");
scanf("%f", &a);
printf("b girin: ");
scanf("%f", &b);
printf("c girin: ");
scanf("%f", &c);
float delta = b*b - 4*a*c;
if (delta < 0)
{
    printf("delta 0 dan kucuk");
}
else{
     x1 = (-1*b+sqrt(delta))/2*a;
    x2 = (-1*b-sqrt(delta))/2*a;
    printf("\n x1 = %f", x1);
    printf("\n x2 = %f", x2);
   
}
}