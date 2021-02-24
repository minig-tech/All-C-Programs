#include<stdio.h>

int main()
{
   float a[11][2]= { {34.22,102.43},{39.87,100.93},{41.85,97.43},{43.23,97.81},{40.06,98.32},{53.29,98.32},
                      {53.29,100.07},{54.14,97.08},{49.12,91.59},{40.71,94.85},{55.15,94.65}  } ;
   float sum=0,sum1=0,sum2=0,sum3=0,sum4=0,r;
   int i;

  for(i=0;i<11;i++)
  {
      sum= sum + a[i][0] * a[i][1];
      sum1 = sum1 + a[i][0];
      sum2 = sum2 + a[i][1];
      sum3 = sum3 + a[i][0]*a[i][0];
      sum4 = sum4 + a[i][1]*a[i][1];
  }

      r = ( (11.0*sum) - (sum1*sum2))/ sqrt( ((11.0*sum3) - (sum1*sum1))* ((11.0*sum4) - (sum2*sum2)) ) ;

      printf("%f\n",r);

return 0;
    }
