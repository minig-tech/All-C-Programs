#include<stdio.h>

int main()

{
int a,b,c,d,e,f,num;

printf("Enter a five digit number: ");
scanf("%d",&num);


b=num/10000;


a=num%10000;

c=a/1000;
c=c*10;

a=a%1000;

d=a/100;
d=d*100;

a=a%100;

e=a/10;
e=e*1000;


a=a%10;
a=a*10000;

f= a+b+c+d+e;

printf("%d",f);

if ( num==f)

     printf("\n\noriginal and reversed numbers are equal\n");
else
     printf ("\n\noriginal and reversed numbers are not equal\n");




return 0;

}
