#include<stdio.h>

int main()
{
    int j=0,i,n;

    printf("Enter the size of array: ");
    scanf("%d",&n);

    int num[n],num1[n];

    printf("Enter %d elements: ",n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
printf("\nArray 1:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",num[i]);
    }

    for(i=n-1;i>=0;i--)
    {
        num1[j]=num[i];
        j++;
    }
    printf("\n\nArray 2:\n");

    for(i=0;i<n;i++)
    {
        printf("%d ",num1[i]);
    }
    printf("\n");
return 0;
}
