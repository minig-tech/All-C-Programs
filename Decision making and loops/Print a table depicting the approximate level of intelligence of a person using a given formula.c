#include<stdio.h>

int main()
{
float y,x,i;

    printf("   Y\t\t   X\t\t   I\n\n");

    for(y=1;y<=6;y++)
    {
        for(x=5.5;x<=12.5;x=x+0.5)
        {
            i = 2 + ( y + 0.5*x) ;

            printf("%f\t%f\t%f\n",y,x,i);

        }
       printf("\n");
    }

return 0;

}
