#include<stdio.h>

int main()
{
int i,k,j;

for(i=2;i<=300;i++)
{
if (i==2)
printf("%d\t",i);

else
{
    j=sqrt(i);
    for(k=2;k<=j;k++)
    {
      if(i%k==0)
      break;
    }

    if(k-1==j)
    printf("%d\t",i);
}

}
return 0;
}
