//Display Fibonacci Sequence
#include<stdio.h>

int main()
{
int latest=1,old=0,temp,t,i;

printf("Enter the number of terms: ");
scanf("%d",&t);

printf("%d\n",old);
printf("%d\n",latest);

for(i=3;i<=t;i++)
{
    temp = latest + old;
    printf("%d\n",temp);
    old=latest;
    latest=temp;
}


return 0;
}

