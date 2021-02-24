
#include<stdio.h>


int main()
{
int x1,y1,x2,y2,x3,y3,a;

printf("Enter x and y coordinates of 1st point: ");
scanf("%d %d",&x1,&y1);

printf("Enter x and y coordinates of 2nd point: ");
scanf("%d %d",&x2,&y2);

printf("Enter x and y coordinates of 3rd point: ");
scanf("%d %d",&x3,&y3);


a = ( x1*(y2-y3)+ x2*(y3-y1)+ x3*(y1-y2) ) ;

if ( a==0)


printf("\nAll three points fall on one straight line\n");

else


printf("\nAll three points do not fall on one straight line\n");

return 0;

}
