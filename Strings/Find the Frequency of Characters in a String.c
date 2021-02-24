//Find the Frequency of Characters in a String
#include<stdio.h>

int main()
{
    int b=0,i,j;
    char str[100];

    printf("Enter a string: ");
    scanf("%s",&str);

    for(i=0;i<=255;i++)
    {
        for(j=0;j<=100;j++)
        {
            if(str[j]=='\0')
                break;

            else if(str[j]==i)
                b=b+1;
        }
        if(b!=0)
        printf("\nFrequency of %c = %d\n",i,b);
        b=0;
    }

    return 0;
}
