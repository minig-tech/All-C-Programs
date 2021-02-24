#include<stdio.h>

int main()
{
  int a[6][6],b[6][6],c[6][6],i,j;

  printf("For first matrix:\n");

  for(i=0;i<6;i++)
  {
      for(j=0;j<6;j++)
      {
          printf("Enter element for row no. %d and column no. %d: ",i,j);
          scanf("%d",&a[i][j]);
      }
  }


  printf("\nFor second matrix:\n");

  for(i=0;i<6;i++)
  {
      for(j=0;j<6;j++)
      {
          printf("Enter element for row no. %d and column no. %d: ",i,j);
          scanf("%d",&b[i][j]);
      }
  }

  printf("\nSum of two matrices=\n");

  for(i=0;i<6;i++)
  {
      for(j=0;j<6;j++)
      {
          c[i][j]= a[i][j] + b[i][j];
          printf("%d ",c[i][j]);
      }

      printf("\n");
  }

  return 0;

}
