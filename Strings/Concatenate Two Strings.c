//Concatenate Two Strings
#include<stdio.h>

int main()
{
    char str1[100],str2[100],str[100];

    int j=0,i,k;

    printf("Enter two strings:  ");
    scanf("%s %s",&str1,&str2);

    for(i=0;;i++)
    {
        if (str1[i]=='\0')
            break;

            str[j] = str1[i];
            j++;


    }



    for(k=0; ;k++)
    {
        if (str2[k]=='\0')
            break;


            str[j] = str2[k];
            j++;
    }

    str[j]='\0';
    printf("\n%s\n",str);
}
