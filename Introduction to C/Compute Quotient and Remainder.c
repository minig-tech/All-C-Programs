//Compute Quotient and Remainder
#include<stdio.h>

int main()
{
int a,b,c,d;

printf("Enter two numbers: ");
scanf("%d %d",&a,&b);

c=a/b;
d=a%b;

printf("Quotient= %d\nRemainder= %d\n",c,d);

return 0;
}
