//Reverse a Number
#include<stdio.h>

int main()
{
    int c=0,b,a,d,sum;

    printf("Enter a number: ");
    scanf("%d",&a);


    d=a;

    while(d>=10)
    {
        d = d/10 ;
        c=c+1;
    }

    for(sum=0;a>=10;c--)
    {
        b=a%10;
        a=a/10;

        b=b*pow(10,c);

        sum=sum+b;
    }
    sum=sum+a;

    printf("%d",sum);
    return 0;
}
