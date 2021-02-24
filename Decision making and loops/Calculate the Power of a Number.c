//Calculate the Power of a Number
#include<stdio.h>

int main()
{
    int n,p,num=1,i;

    printf("Enter a number and its power: ");
    scanf("%d %d",&n,&p);

    for(i=1;i<=p;i++)
    {
        num=num*n;
    }
    printf("%d",num);


    return 0;
}
