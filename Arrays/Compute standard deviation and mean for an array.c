#include<stdio.h>

int main()
{
    int i,a[15]={-6,-12,8,13,11,6,7,2,-6,-9,-10,11,10,9,2};
    float mean,sum=0,std,c,b=0;

    for(i=0;i<15;i++)
    {
        sum = sum + a[i];
    }

    mean = sum/15;
    sum =0;

     for(i=0;i<15;i++)
    {
        b = a[i] - mean;
        b=b*b;
        sum = sum + b;
        b=0;
    }

    /* c= sqrt(sum);
    std= c/15; */

    c=sum/15;
    std=sqrt(c);

    printf("\nMean = %f\nStandard deviation = %f\n",mean,std);

    return 0;

}
