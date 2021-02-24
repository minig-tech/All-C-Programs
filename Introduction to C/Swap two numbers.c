//Swap Two Numbers
#include<stdio.h>

int main()
{
int a,b,c;

printf("Enter two numbers: ");
scanf("%d %d",&a,&b);

c=a;
a=b;
b=c;

printf("\n%d %d\n",a,b);

return 0;
}

