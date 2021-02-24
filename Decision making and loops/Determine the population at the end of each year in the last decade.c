#include<stdio.h>

int main()
{
    float a,p=100000;
    int i,year=2010;

    for(i=1;i<=10;i++)
    {
        a=(10*p)/100;
        p=p+a;

        printf("\nPopulation at the end of year %d = %f\n",year,p);

        year=year+1;
    }
    return 0;
}
