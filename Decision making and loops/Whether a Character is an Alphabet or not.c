//Whether a Character is an Alphabet or not
#include<stdio.h>

int main()
{
    char a;

printf("Enter a character: ");
scanf("%c",&a);

if((a>=65 && a<=90) || (a>=90 && a<=122))
{
    printf("\nYes\n");
}
else
    printf("\nNo\n");

return 0;
}
