//Display Armstrong Number Between Two Intervals
#include<stdio.h>

int main()
{
    int num1,num2,a,i,c,b=1,sum=0;

    printf("Enter two numbers: ");
    scanf("%d %d",&num1,&num2);

    for(i=num1;i<=num2;i++)
    {
        a = i;
        b=1;sum=0;

while(a>=10)
{
  a=a/10;
  b=b+1;
}

a = i;

for(;;)
{
    c=a%10;
    a=a/10;

    c=pow(c,b);

    sum=sum+c;

    if(a==0)
        break;

    }

if(sum==i)
    printf("\n%d\n",i);
}

return 0;
}
