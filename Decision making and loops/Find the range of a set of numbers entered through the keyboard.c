#include<stdio.h>

int main()
{
int a,b=0,num,range,c=12345;


    for( ; ; )
    {
        printf("do you want to enter a number, 1- yes , 2- no: ");
        scanf("%d",&a);

        if(a==1)
        {
            printf("Enter a distinct number: ");
            scanf("%d",&num);
            a=num;


            if(a>b)
                b=a;
            else
                b=b;

            if(a<c)
                c=a;
            else
                c=c;

        }

        else
            break;
    }

    range = b-c;
    printf("\nrange = %d\n",range);

  return 0;
}
