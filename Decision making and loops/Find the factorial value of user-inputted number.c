#include<stdio.h>

int main()
{
    int a,num,b;
    printf("Enter a number: ");
    scanf("%d",&a);
    num=a;

if(a==0)
{
    printf("\nFactorial of 0 = 1\n");
}

else{
    for(b=a-1;b>=1;b--)
    {
        num=num*b;
    }

    printf("\nFactorial of %d = %d\n",a,num);

}
return 0;
}
