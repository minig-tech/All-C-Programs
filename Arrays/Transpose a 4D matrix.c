#include<stdio.h>

int main()
{
    int num[4][4],num1[4][4],i,j;

    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("Enter element of row no.%d , column no.%d :",i,j);
            scanf("%d",&num[i][j]);

        }
    }

    printf("\nMatrix A = \n");

    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d ",num[i][j]);

            num1[i][j]= num[j][i];
        }
        printf("\n");
    }

    printf("\nTranspose of matrix A = \n");

    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d ",num1[i][j]);
        }
        printf("\n");
    }
    return 0;

}
