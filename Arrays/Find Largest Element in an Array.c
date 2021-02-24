//Find Largest Element in an Array
#include<stdio.h>

int main()
{
    int size,i,b;

    printf("Enter size of array: ");
    scanf("%d",&size);

    int a[size];

    for(i=0;i<size;i++)
    {
        printf("Enter element no. %d: ",i+1);
        scanf("%d",&a[i]);
    }

b=a[0];

    for(i=1;i<size;i++)
    {
    if(b>a[i])
        b=b;

    else if(b<=a[i])
        b=a[i];
    }

    printf("\nLargest element = %d\n",b);

    return 0;

}
