//Find the Largest Number Among Three Numbers

#include<stdio.h>

int main()
{
int a,b,c;

printf("Enter three distinct numbers: ");
scanf("%d %d %d",&a,&b,&c);

if(a>b && a>c)
printf("\n%d\n",a);

else if(b>c && b>a)
printf("\n%d\n",b);

else if(c>a && c>b)
printf("\n%d\n",c);

return 0;
}
