//Calculate Average Using Arrays
#include<stdio.h>

int main()
{
    int size,i;
    float sum=0,avg;

    printf("Enter size of array: ");
    scanf("%d",&size);

    int a[size];

    for(i=0;i<size;i++)
    {
        printf("Enter element no. %d: ",i+1);
        scanf("%d",&a[i]);

        sum =sum+a[i];
    }

    avg=sum/size;

    printf("\n%f\n",avg);

    return 0;

}
