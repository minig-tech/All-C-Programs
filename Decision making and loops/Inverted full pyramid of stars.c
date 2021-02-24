/*  Inverted full pyramid of *
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *   */

#include<stdio.h>
int main()
{
   int r,i,j,k;
   printf("Enter the no. of rows: ");
   scanf("%d",&r);
   k=2*r;

   for(i=1;i<=r;i++)
   {
       for(j=1;j<i;j++)
       {
           printf("  ");
       }

       for(j=1;j<k;j++)
       {
           printf("* ");
       }

       for(j=1;j<i;j++)
       {
           printf("  ");
       }
       printf("\n");
       k=k-2;
   }
   return 0;
}
