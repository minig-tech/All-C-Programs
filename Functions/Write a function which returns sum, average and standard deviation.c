#include<stdio.h>
int temp(int);
int temp2(int);
int main()
{
  int a,b,c,d,e,sum;
  float avg;

  printf("Enter five integers: ");
  scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);

  sum=temp1(a,b,c,d,e);
  avg=temp2(sum);

  printf("\nsum = %d\navg = %f\n",sum,avg);

   return 0;
}


int temp1(int a1,int b1,int c1,int d1,int e1)
{
   int sum;

   sum = a1+b1+c1+d1+e1;

   return sum;


}

int temp2(int sum)
{
    float avg;

    avg= sum/5.0;

    return avg;
}
