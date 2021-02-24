
#include<stdio.h>


int main()
{
int a;

printf("Enter a number: ");
scanf("%d",&a);

if (a<0)
{

a = -a;

printf("\nAbsolute value of number is %d\n",a);

}


else
printf("\nAbsolute value of number is %d\n",a);


return 0;

}
