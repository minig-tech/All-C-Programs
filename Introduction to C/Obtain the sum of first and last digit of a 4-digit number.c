
int main()
{
int a,b,c,d,e,sum;

printf("Enter a four digit number:  ");
scanf("%d",&a);


b=a/1000;
a=a%1000;

c=a/100;
a=a%100;

d=a/10;
a=a%10;

e=a/1;
a=a%1;



sum=b+e;

printf("%d",sum);


return 0;

}
