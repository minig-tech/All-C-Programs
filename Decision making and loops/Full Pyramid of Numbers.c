/* Full Pyramid of Numbers
        1
      2 3 2
    3 4 5 4 3
  4 5 6 7 6 5 4
5 6 7 8 9 8 7 6 5  */

#include<stdio.h>
int main()
{
   int r,i,j,k=1,l=2;
   printf("Enter the no. of rows: ");
   scanf("%d",&r);

   for(i=1;i<=r;i++)
   {
       k=i;
       l=2*(i-1);

       for(j=1;j<=r-i;j++)
       {
           printf("\t");
       }

       for(j=1;j<=i;j++)
       {
           printf("%d\t",k);
           k++;
       }

       for(j=1;j<i;j++)
       {
           printf("%d \t",l);
           l--;
       }

       for(j=1;j<=r-i;j++)
       {
           printf("\t");
       }
       printf("\n");

   }
   return 0;
}
