//Count the Number of Vowels, Consonants ,numbers, special characters
#include<stdio.h>

int main()
{
int b=0,j,c=0,d=0,e=0;

char str[100];

printf("Enter a string: ");
scanf("%s",&str);


    for(j=0;;j++)
    {
        if (str[j]=='\0')
            break;

        else if(str[j]=='a' || str[j]=='e' || str[j]=='i' || str[j]=='o' || str[j]=='u' || str[j]=='A' || str[j]=='E' ||
                str[j]=='I' || str[j]=='O' || str[j]=='U')

                    b=b+1;

        else if((str[j]>=(char)65 && str[j]<=(char)90) || (str[j]>=(char)97 && str[j]<=(char)122))
            c=c+1;

        else if( str[j]>=(char)48 && str[j]<=(char)58)
            d=d+1;

        else
            e=e+1;
    }


        printf("\nCount of vowels = %d\n",b);
        printf("\nCount of consonants = %d\n",c);
        printf("\nCount of numbers = %d\n",d);
        printf("\nCount of special characters = %d\n",e);

return 0;
}
