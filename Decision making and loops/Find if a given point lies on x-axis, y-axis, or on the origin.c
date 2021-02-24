
#include<stdio.h>


int main()
{

int x,y;

printf("Enter x and y coordinate of a point(only on x or y axis or on origin): ");
scanf("%d %d",&x,&y);


if (x==0 && y==0)

printf("\npoint lies on origin\n");

else if (x==0 && y!=0)

printf("\npoint lies on y axis\n");

else if (y==0 && x!=0)

printf("\npoint lies on x axis\n");




return 0;

}
