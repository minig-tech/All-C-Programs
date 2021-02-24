#include<stdio.h>

int main()
{
float a,b,c,d,h,area;

printf("Enter three sides of triangle: ");
scanf("%f %f %f",&a,&b,&c);


d=b/2;

h = sqrt( a*a + d*d  );

area= 1/2*b*h;


printf("%f",area);


return 0;

}
