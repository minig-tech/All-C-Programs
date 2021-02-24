
#include<stdio.h>

int main()
{
    int n;

    printf("Enter no. of rows/columns for a square matrix: ");
    scanf("%d",&n);

    int num[n][n],num1[n][n],i,j;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter element of row no.%d , column no.%d :",i,j);
            scanf("%d",&num[i][j]);

        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
             num1[i][j]= num[j][i];

        }
    }

      for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
             if (num1[i][j]== num[i][j])
                continue;

            else break;
        }

       if(j!=n)
        break;

    }

if(i==n)  printf("\nSymmetric matrix\n");

    else
        printf("\nNot a symmetric matrix\n");

    return 0;
}
