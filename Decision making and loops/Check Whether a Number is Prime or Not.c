//Check Whether a Number is Prime or Not
#include<stdio.h>

int main()
{
    int a,b,i;

    printf("Enter a number: ");
    scanf("%d",&a);

    b=sqrt(a);


    if(a==2)
        printf("Yes");
    else
    {

    for(i=2;i<=b;)
    {
        if(a%i!=0)
           i++;

           else
            break;
    }

    i=i-1;

    if(i==b)
        printf("\nYes\n ");
        else
            printf("\nNo\n");


    }
        return 0;

}
