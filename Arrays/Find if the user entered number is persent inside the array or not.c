
#include<stdio.h>

int main()
{
    int i,a[25],b,c=0;

    printf("Enter 25 numbers: ");

    for(i=0;i<25;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter a number you want to search: ");
    scanf("%d",&b);


    for(i=0;i<25;i++)
    {
        if(b==a[i])
            c=c+1;
    }

    if(c!=0)
    printf("\nYes, %d is present in the array and it appears %d times\n",b,c);

    else if(c==0)
        printf("\nNo, %d is not present in the array\n");

    return 0;

}
