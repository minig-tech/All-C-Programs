#include<stdio.h>

int main()

{
int a,b,profit,loss;

printf("Enter the cost price: ");
scanf("%d",&a);
printf("Enter the selling price: ");
scanf("%d",&b);



if (a<b)

{
printf("\nYou have made a profit\n\n");

profit = b - a ;
printf("Profit is %d\n",profit);

}

else if (a>b)

{ printf("\nYou have incurred a loss\n\n");


loss= a-b;
printf("Loss is %d\n",loss);



}

return 0;
}
