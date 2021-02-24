/* Half Pyramid of Alphabets
A
B B
C C C
D D D D
E E E E E  */

#include<stdio.h>
int main()
{
    int i,j,a;
    char k;
    k=65;

    printf("Enter number of rows: ");
    scanf("%d",&a);


    for(i=1;i<=a;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c ",k);
        }
        k=k+1;
        printf("\n");
    }
return 0;
}



