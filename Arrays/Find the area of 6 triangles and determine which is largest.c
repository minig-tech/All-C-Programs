
#include<stdio.h>

int main()
{
    float  a[10][2] = {  {3.0,1.5},{4.5,2.0},{5.5,3.5},{6.5,5.0},{7.5,6.0},
                     {8.5,7.5},{8.0,9.0},{9.0,10.5},{9.5,12.0},{10.0,14.0}  },sum=0,sum1=0,sum2=0,sum3=0,b,mean1,mean2,c;

                     int i;

  for(i=0;i<10;i++)
  {
      sum = sum + a[i][0]*a[i][1];
      sum1 = sum1 + a[i][0];
      sum2 = sum2 + a[i][1];
      sum3 = sum3 + a[i][0]*a[i][0];


  }

    b = ((10.0*sum) - (sum1*sum2))/ ((10.0*sum3) - (sum1*sum1 ));

    mean1 = sum1/10.0;
    mean2 = sum2/10.0;

    c = mean2 - ( b*mean1 );

     printf("%f\n",c);

  return 0;
}
