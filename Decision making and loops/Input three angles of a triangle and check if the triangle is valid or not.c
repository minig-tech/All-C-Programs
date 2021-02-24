#include<stdio.h>

int main()
{

int a,b,c;
printf("Enter three angles of triangle in degree(angle should not be zero): ");
scanf("%d %d %d",&a,&b,&c);


if ( (a+b+c) == 180)
printf("\nTriangle is valid\n");

else
printf("\nTriangle is not valid\n");


return 0;

}
