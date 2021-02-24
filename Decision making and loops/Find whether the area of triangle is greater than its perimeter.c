
#include<stdio.h>


int main()
{
 int l,b,area,perimeter;

 printf("Enter length and breadth of rectangle: ");
 scanf("%d %d",&l,&b);


 area = l*b;
 perimeter = 2*(l+b);


 if ( area > perimeter )

 printf ("\nArea of rectangle with length = %d and breadth = %d is greater than its perimeter.\n",l,b);

else

printf ("\nArea of rectangle with length = %d and breadth = %d is less than its perimeter.\n",l,b);

return 0;

}
