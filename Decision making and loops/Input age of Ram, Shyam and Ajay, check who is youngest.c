#include<stdio.h>



int main()
{
int a,b,c,d;

printf("Enter Ram's age: ");
scanf("%d",&a);

printf("Enter Shyam's age: ");
scanf("%d",&b);

printf("Enter Ajay's age: ");
scanf("%d",&c);


if (a>b)
d=b;

else
d=a;


if (d>c)

printf("\nYoungest one is Ajay\n");

else
{
if  (d==a)


printf("\nYoungest one is Ram\n");

else

printf("\nYoungest one is Shyam\n");

}

return 0;


}
