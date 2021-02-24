//Find the Sum of Natural Numbers using Recursion
#include<stdio.h>
int recur(int num);

int main()
{
    int num,sum;

    printf("Enter a number: ");
    scanf("%d",&num);

    sum = recur(num);

    printf("\n%d\n",sum);

    return 0;
}

int recur(int num)
{
    int sum;
    if(num==1)
        sum = num;

    else sum = num + recur(num-1);

     return sum;
}
