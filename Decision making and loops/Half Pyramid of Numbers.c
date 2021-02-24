/* Half Pyramid of Numbers
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5  */
#include<stdio.h>

int main()
{
    int i,j,a;

    printf("Enter number of rows: ");
    scanf("%d",&a);


    for(i=1;i<=a;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }

        printf("\n");
    }
return 0;
}
