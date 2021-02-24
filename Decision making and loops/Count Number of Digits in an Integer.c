//Count Number of Digits in an Integer
#include<stdio.h>

int main()
{
 int a,b=1;

 printf("Enter an integer: ");
 scanf("%d",&a);


while(a>=10)
{
  a=a/10;
  b=b+1;
}
printf("No. of digits = %d",b);
return 0;
}
