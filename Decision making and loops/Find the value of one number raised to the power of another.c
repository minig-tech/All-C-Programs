#include<stdio.h>

int main()
{
    int a,b,num,i;
printf("Enter two numbers: ");
scanf("%d %d",&a,&b);
num=1;


for(i=1;i<=b;i++)
{
    num=num*a;
}
printf("%d",num);
return 0;

}
