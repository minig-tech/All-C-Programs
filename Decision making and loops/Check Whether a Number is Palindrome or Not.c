//Check Whether a Number is Palindrome or Not
#include<stdio.h>

int main()
{
    int sum=0,c=0,b,n,d;

    printf("Enter an integer: ");
    scanf("%d",&n);
    d=n;

    while(d>=10)
    {
      d=d/10;
      c=c+1;
    }
d=n;
    while(d>=10)
    {
       b=d%10;
       b=b*pow(10,c);
       sum=sum+b;
       d=d/10;
       c--;
    }
    sum = sum + d;

    if(n==sum)
        printf("yes");
    else
        printf("no");

    return 0;
}
