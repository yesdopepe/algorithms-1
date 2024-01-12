#include <stdio.h>
#include <ctype.h>
int input, i = 0;
char string[100];
int main(int argc, char const *argv[])
{
    printf("cumle gir: ");
   do
   {
    input = getchar();
    string[i] = input;
if (string[i - 1] == ' ' || i == 0)
{
    string[i] = toupper(string[i]);
}
i++;
   } while (input != '\n');
   printf("\n%s", string);
    
    return 0;
}
