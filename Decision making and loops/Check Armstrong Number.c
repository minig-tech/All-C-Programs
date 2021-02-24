//Check Armstrong Number
#include<stdio.h>

int main()
{
    int sum=0,a,b=1,num,c;

printf("Enter an integer: ");
scanf("%d",&num);

a = num;

while(a>=10)
{
  a=a/10;
  b=b+1;
}

a = num;

for(;;)
{
    c=a%10;
    a=a/10;

    c=pow(c,b);

    sum=sum+c;

    if(a==0)
        break;

    }

if(sum==num)
    printf("\nyes\n");

else
    printf("\nno\n");

return 0;
}
