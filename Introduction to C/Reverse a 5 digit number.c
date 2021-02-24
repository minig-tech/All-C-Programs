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
c=c*10;

d=a/100;
a=a%100;
d=d*100;

e=a/10;
a=a%10;
e=e*1000;

f=a/1;
f=f*10000;

sum=b+c+d+e+f;

printf("%d",sum);


return 0;

}
