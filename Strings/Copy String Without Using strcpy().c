//Copy String Without Using strcpy()

#include<stdio.h>

int main()
{
    int j=0,i;
    char str[100],str1[100];

    printf("Enter a string: ");
    scanf("%s",&str);

    for(i=0; ;i++)
    {
        if (str[i]=='\0')
            break;

        str1[j]=str[i];
        j++;
    }

    str1[j]='\0';

    printf("\n%s\n",str1);

    return 0;
}
