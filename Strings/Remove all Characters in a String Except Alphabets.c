//Remove all Characters in a String Except Alphabets
#include<stdio.h>

int main()
{
    int j,i=0;
    char str[100],str1[100];

    printf("Enter a string: ");
    scanf("%s",&str);

    for(j=0;;j++)
        {
            if(str[j]=='\0')
                break;

                else if( (str[j]>=(char)65 && str[j]<=(char)90) || (str[j]>=(char)97 && str[j]<=(char)122))
                     {str1[i]=str[j];
                     i++;}

    }

    str1[i]='\0';

    printf("\n%s\n",str1);

    return 0;
}
