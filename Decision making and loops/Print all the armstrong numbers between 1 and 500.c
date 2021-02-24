#include<stdio.h>

int main()
{
int i,j,a,b,c;

   for(i=1;i<=9;i++)
   {
       if(i==i*i*i)
        printf("\n%d\n",i);

   }


    for(i=10;i<=99;i++)
    {
        a=i/10;
        b=i%10;

        if(i== a*a*a + b*b*b)
            printf("\n%d\n",i);
    }

    for(i=100;i<=500;i++)
    {
        a=i%10;
        j=i/10;

        b=j/10;
        c=j%10;

        if(i == a*a*a + b*b*b + c*c*c )
            printf("\n%d\n",i);
    }

    return 0;

}
