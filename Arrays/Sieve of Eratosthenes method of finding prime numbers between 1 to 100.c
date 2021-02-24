#include<stdio.h>

int main()
{

int num[100],i,j;

for(i=0;i<100;i++)
{
    num[i]=i+1;
}

for(j=1;j<100;j++)
{
    if(num[j]==0)
        continue;

    for(i=j+1;i<100;i++)
    {
        if(num[i]%num[j]==0)
            num[i]=0;
    }
}

printf("Prime numbers from 1 to 100 are\n\n");

for(i=1;i<100;i++)
{
    if(num[i]!=0)
        printf("%d\n",num[i]);
}
return 0;
}
