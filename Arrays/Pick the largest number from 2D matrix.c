#include<stdio.h>

int main()
{
int num[5][5],a,i,j;

for(i=0;i<5;i++)
{
    for(j=0;j<5;j++)
    {
        printf("Enter element for row no. %d , column no. %d : ",i,j);
        scanf("%d",&num[i][j]);
    }
}

a=num[0][0];

printf("\n");

for(i=0;i<5;i++)
{
    for(j=0;j<5;j++)
    {
        printf("%d   ",num[i][j]);

        if(num[i][j]>=a)
            a=num[i][j];
    }

    printf("\n");
}

printf("\nLargest number = %d\n",a);

return 0;
}
