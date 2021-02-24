//Display Prime Numbers Between Two Intervals
#include<stdio.h>

int main()
{
    int a,b,i,j,c;

    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);

    for(j=a;j<=b;j++)
    {
    c=sqrt(j);
    if(j==2)
        printf("\n%d\n",j);
    else
    {
    for(i=2;i<=c;)
    {
        if(j%i!=0)
           i++;

           else
            break;
    }
    i=i-1;
     if(i==c)
        printf("\n%d\n",j);
    }
    }

    return 0;

}
