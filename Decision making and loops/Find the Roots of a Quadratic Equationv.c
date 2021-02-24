//Find the Roots of a Quadratic Equation
#include<stdio.h>

int main()
{
    float a,b,c,d,p,q;
    printf("Enter three values: ");
    scanf("%f %f %f",&a,&b,&c);

    d = b*b - 4*a*c ;

    if (d>=0)
    {
        d=sqrt(d);
        p=(-b+d)/2*a;
        q=(-b-d)/2*a;
        printf("\n%f %f\n",p,q);
    }
    else
        printf("\nNo real root exist\n");
    return 0;
}
