//Add Two Distances (in inch-feet system) using Structures
#include<stdio.h>

int main()

{
    struct distance
    {
        int feet;
        float inch;
    }a,b,c;

    printf("for 1st distance,enter feets and inches: ");
    scanf("%d %f",&a.feet,&a.inch);

      printf("\nfor 2nd distance,enter feets and inches: ");
    scanf("%d %f",&b.feet,&b.inch);

    c.feet = a.feet + b.feet;
    c.inch = a.inch + b.inch;

    printf("\nSum of distances = %d' %f'' \n",c.feet,c.inch);

    return 0;



}
