#include<stdio.h>

int main()
{
    int num[25],a,i;

    printf("Enter 25 integers: ");

    for(i=0;i<25;i++)
    {
        scanf("%d",&num[i]);
    }

    a=num[0];

     for(i=1;i<25;i++)
    {
        if(a>num[i])
            a=num[i];
    }

    printf("\nSmallest number is %d\n",a);

    return 0;

}
