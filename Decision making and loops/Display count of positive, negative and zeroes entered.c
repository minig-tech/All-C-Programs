
#include<stdio.h>

int main()
{


int a[100],i,b=0,c=0,num;

for(i=0;i<100;i++)
{
printf("Enter the value: ");
scanf("%d",&a[i]);

if(a[i]>0)
b=b+1;

else if (a[i]<0)
c=c+1;

printf("Do you want to enter another number ( 1 - yes, 2 - no ) ?: ");
scanf("%d",&num);

if (num==2)
    break;

}

printf("\nTotal number of positive elements: %d\n\nTotal number of negative elements: %d\n",b,c);

return 0;
}
