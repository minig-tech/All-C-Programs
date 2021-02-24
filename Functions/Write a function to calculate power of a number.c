#include<stdio.h>
long long int power(int, int);
int main()

{
 int a,b;
 long long int c;

printf("Enter two numbers: ");
scanf("%d %d",&a,&b);

c = power(a,b);

printf("\n%llu\n",c);
return 0;

}



long long int power(int a,int b)
{

long long int value = 1,i;

for(i=1;i<=b;i++)
{
    value = value*a;

}

return value;

}

















