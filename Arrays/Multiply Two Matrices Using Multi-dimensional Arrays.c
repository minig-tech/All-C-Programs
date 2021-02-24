//Multiply Two Matrices Using Multi-dimensional Arrays
#include<stdio.h>

int main()
{
    int i,j,k,l;
 printf("Enter no. of rows and columns: ");
 scanf("%d %d",&i,&j);

 int a[i][j],b[i][j],c[i][j];

 printf("\n");

 for(k=0;k<i;k++)
 {
     for(l=0;l<j;l++)
     {
         printf("For first matrix, Enter element no. %d(row) %d(column): ",k,l);
            scanf("%d",&a[k][l]);
 }
}

printf("\n");

for(k=0;k<i;k++)
 {
     for(l=0;l<j;l++)
     {
         printf("For second matrix, Enter element no. %d(row) %d(column): ",k,l);
            scanf("%d",&b[k][l]);
 }
}

printf("\n");

for(k=0;k<i;k++)
 {
     for(l=0;l<j;l++)
     {
         c[k][l] = b[k][l] * a[k][l];
         printf("%d ",c[k][l]);
     }

 printf("\n");
}

return 0;
}
