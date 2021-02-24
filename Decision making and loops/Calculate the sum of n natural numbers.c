//Calculate the sum of n natural numbers
#include<stdio.h>

int main()
{
int i,sum=0,n;

printf("Enter the value of n: ");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
    sum=sum+i;
}

printf("\nsum of all natural numbers till %d = %d\n",n,sum);
return 0;
}
