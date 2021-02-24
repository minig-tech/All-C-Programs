#include<stdio.h>

int main()
{
    int num[25],i,a=0,b=0,c=0,d=0,e=0;

    printf("Enter 25 numbers: ");

    for(i=0;i<25;i++)
    {
        scanf("%d",&num[i]);

        if(num[i]>0 )
            a=a+1;

            else if(num[i]<0)
                b=b+1;

                else if(num[i]==0)
                e=e+1;

            if(num[i]%2==0)
                c=c+1;

            else if(num[i]%2!=0)
                d=d+1;
    }

    printf("\nPositive numbers = %d\nNegative numbers = %d\nNeutral numbers = %d\nEven numbers = %d\nOdd numbers = %d\n",a,b,e,c,d);
    return 0;
}
