/* Inverted half pyramid of *

* * * * *
* * * *
* * *
* *
*     */

#include<stdio.h>

int main()
{
    int i,j,a;

    printf("Enter number of rows: ");
    scanf("%d",&a);


    for(i=1;i<=a;i++)
    {
        for(j=a;j>=i;j--)
        {
            printf("* ");
        }

        printf("\n");
    }
return 0;
}

