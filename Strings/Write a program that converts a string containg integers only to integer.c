#include<stdio.h>

int main()
{
    char a[100];

    int sum=0,i,j,k;

    printf("Enter a string ( only numbers ): ");
    scanf("%s",&a);

    for(i=0;;i++)
    {
        if(a[i]=='\0')
            break;
    }

    k=i-1;

    k=pow(10,k);

    for(j=0;j<i;j++)
    {
        sum = sum + ( k*(char)a[j] );
        k=k/10;

    }

    printf("\n%d\n",sum);

    return 0;

}
