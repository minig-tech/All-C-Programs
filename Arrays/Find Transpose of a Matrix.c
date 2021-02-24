 //Find Transpose of a Matrix
#include<stdio.h>

int main()
{
    int i,j,k,l;
 printf("Enter no. of rows and columns: ");
 scanf("%d %d",&i,&j);

 int a[i][j],b[j][i];

 printf("\n");

 for(k=0;k<i;k++)
 {
     for(l=0;l<j;l++)
     {
         printf("Enter element no. %d(row) %d(column): ",k,l);
            scanf("%d",&a[k][l]);
 }
}
printf("\n");
printf("Matrix A = ");
printf("\n");
for(k=0;k<i;k++)
 {
     for(l=0;l<j;l++)
     {
         printf("%d ",a[k][l]);

 }
 printf("\n");
}

printf("\n");

for(k=0;k<i;k++)
 {
     for(l=0;l<j;l++)
     {
        b[k][l] = a[l][k];
 }
}

printf("Transpose of Matrix A = ");
printf("\n");
for(k=0;k<i;k++)
 {
     for(l=0;l<j;l++)
     {
         printf("%d ",b[k][l]);

 }
 printf("\n");
}

return 0;
}
