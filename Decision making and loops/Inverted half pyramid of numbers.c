/*   Inverted half pyramid of numbers
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1   */

#include<stdio.h>

int main()
{
    int i,j,a,k=1;

    printf("Enter number of rows: ");
    scanf("%d",&a);


    for(i=1;i<=a;i++)
    {
        for(j=a;j>=i;j--)
        {
            printf("%d ",k);
            k++;
        }

        printf("\n");
        k=1;
    }
return 0;
}
