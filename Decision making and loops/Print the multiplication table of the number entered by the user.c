#include<stdio.h>

int main()
{
int a,i,b;

printf("Enter a number: ");
scanf("%d",&a);

for(i=1;i<=10;i++)
{
    b = a*i;

    printf("\n%d * %d = %d\n",a,i,b);
}
return 0;
}
