#include<stdio.h>

int main()
{

char a;
printf("Enter a character: ");
scanf("%c",&a);


if (a>=65 && a<=90)
printf("\nYou have entered a capital letter\n");

if (a>=97 && a<=122)
printf("\nYou have entered a small case letter\n");

if (a>=48 && a<=57)
printf("\nYou have entered a digit\n");

if (a>=0 && a<=47 || a>=58 && a<=64 || a>=91  && a<=96 || a>=123 && a<=127)
printf("\nYou have entered a special symbol\n");


return 0;
}
