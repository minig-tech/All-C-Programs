#include<stdio.h>
int temp(int);
int temp2(int);
int main()
{
  int a,b,c,sum;
  float avg,per;


  printf("Enter marks in three subjects: ");
  scanf("%d %d %d",&a,&b,&c);

  sum = a+b+c;

  avg=temp1(a,b,c);
  per=temp2(sum);

  printf("\naverage = %f\npercentage = %f\n",avg,per);

   return 0;
}


int temp1(int a,int b,int c)
{
   float avg;

   avg = (a+b+c)/3;

   return avg;


}

int temp2(int sum)
{
    float per;

    per = sum/3.0;

    return per;
}
