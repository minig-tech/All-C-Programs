//Check Whether a Number is Positive or Negative
#include<stdio.h>

int main()
{
    int a;

printf("Enter a number: ");
scanf("%d",&a);

if(a>0)
    printf("\nPositive number\n");
else if(a==0)
    printf("\nNeither positive nor negative\n");

    else
   printf("\nNegative number\n");
return 0;
}
