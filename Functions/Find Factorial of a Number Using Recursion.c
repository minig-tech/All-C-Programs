//Find Factorial of a Number Using Recursion
#include<stdio.h>
int fact(int num);

int main()
{
    int a,num;

    printf("Enter a number: ");
    scanf("%d",&num);

    a = fact(num);

    printf("\nfactorial of %d = %d\n",num,a);

    return 0;
}

int fact(int num)
{
    int a;
    if(num==1 || num==0)
        a= 1;

    else a = num * fact(num-1);

    return a;
}
