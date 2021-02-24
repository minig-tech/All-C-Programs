//Check Leap Year
#include<stdio.h>

int main()
{
int a;

printf("Enter an year: ");
scanf("%d",&a);

if(a%4==0)
{
    if(a%100==0)
    {
        if(a%400==0)
            printf("\nLeap year\n");
        else
            printf("\nNot a leap year\n");
    }
    else
        printf("\nLeap year\n");
}

else
    printf("\nNot a leap year\n");

    return 0;
}
