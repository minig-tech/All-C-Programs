#include<stdio.h>

int main()
{
int a=1,i,j;

for(i=1;i<=4;i++)
{
    for(j=1;j<=4-i;j++)
    {
        printf("  ");
    }

    for(j=1;j<=i;j++)
    {
        printf("%d   ",a);
        a++;
    }
    printf("\n");
}

return 0;

}
