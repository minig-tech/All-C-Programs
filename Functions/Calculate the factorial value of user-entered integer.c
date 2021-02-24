#include<stdio.h>
long long int fact(long long int);
int main()
{
 long long int a,b;

printf("Enter a number: ");
scanf("%llu",&a);

b= fact(a);
printf("\nfactorial of %llu = %llu\n",a,b);

return 0;
}


long long int fact(long long int a)
{
    long long int factorial=1;
  while(a>=1)
  {
      factorial = factorial*a;
      a=a-1;
  }
    return factorial;
}


