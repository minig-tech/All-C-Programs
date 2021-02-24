#include<stdio.h>

int main()
{
    float i,fact=1,a,j,sum=0;

    for(i=1;i<=7;i++)
    {
        for(j=1;j<=i;j++)
        {
            fact=fact*j;
        }

        a=i/fact;

        sum =sum + a;
        fact=1;

    }

    printf("%f",sum);
}
