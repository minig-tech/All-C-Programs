//Display Factors of a Number
#include<stdio.h>

int main()
{
    int a,i;

    printf("Enter a positive integer: ");
    scanf("%d",&a);

    for(i=1;i<=a;i++)
    {

        if(a%i==0)
            printf("\n%d\n",i);

    }
    return 0;
}
