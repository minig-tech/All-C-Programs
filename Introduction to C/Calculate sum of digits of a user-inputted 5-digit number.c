#include<stdio.h>


int main()
{
int a,b,c,d,e,f,sum;

printf("Enter a five digit number:  ");
scanf("%d",&a);


b=a/10000;
a=a%10000;

c=a/1000;
a=a%1000;

d=a/100;
a=a%100;

e=a/10;
a=a%10;

f=a/1;

sum=b+c+d+e+f;

printf("%d",sum);


return 0;

}
