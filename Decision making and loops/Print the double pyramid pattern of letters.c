#include<stdio.h>

int main()
{int a=65,k=1,i,j;

    for(a=65;a<=71;a++)
    {
        printf("%c ",a);
    }

for(a=a-2;a>=65;a--)
{
    printf("%c ",a);
}

printf("\n");
a=65;

    for(i=6;i>=1;i--)
    {
        for(j=1;j<=i;j++)
       {
           printf("%c ",a);
           a++;
       }
       for(j=1;j<=k;j++)
       {
           printf("  ");
       }
       a=a-1;
       for(j=1;j<=i;j++)
       {
           printf("%c ",a);
           a--;
       }
       a=65;
       k=k+2;
       printf("\n");
    }
    return 0;
}
