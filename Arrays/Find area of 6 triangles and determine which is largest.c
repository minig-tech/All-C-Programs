#include<stdio.h>

int main()
{
    float a[6][3]= {  {137.4,80.9,0.78},
                    {155.2,92.62,0.89},
                    {149.7,120.0,1.75},
                    {160.0,100.25,9.00},
                    {155.6,68.95,1.25},
                    {149.3,97.93,1.35}  };
    float b[6],c=0;
    int i;


 for(i=0;i<6;i++)
 {
     b[i]= 0.5 * a[i][0]*a[i][1]*sin(a[i][2]);
     printf(" %d   %f\n",i+1,b[i]);

     if(b[i]>=c)
        c=b[i];


 }

   printf("\n\nLargest area = %f\n",c) ;

return 0;
}
