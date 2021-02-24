#include<stdio.h>

int main()
{
float a,b,c;
float d = 0.7;

printf("Give the value of hardness: ");
scanf("%f",&a);

printf("Give the value of carbon content: ");
scanf("%f",&b);


printf("Give the value of tensile strength: ");
scanf("%f",&c);


if (a>50 && b<d && c>5600)
printf("Grade 10");


else if (a>50 && b<d )
printf("Grade 9");


else if (b<d && c>5600)
printf("Grade 8");

else if (a>50 && c>5600)
printf("Grade 7");

else if (a>50 || b<d || c>5600 )
printf("Grade 6");

else
printf("Grade 5");


return 0;
}
