#include<stdio.h>

int main()
{
    int a[3][3],b[3][3],c[3][3],sum=0,i,j,o;

    printf("For first 3*3 matrix=\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter element of row %d,column %d:",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nFor second 3*3 matrix=\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter element of row %d,column %d:",i,j);
            scanf("%d",&b[i][j]);
        }
    }

    printf("\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(o=0;o<3;o++)
            {
                 sum = sum + a[i][o] * b[o][j] ;
            }
            c[i][j] = sum;
            printf("%d ",c[i][j]);
            sum=0;
        }
        printf("\n");
    }

    return 0;
}
