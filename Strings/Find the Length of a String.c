 //Find the Length of a String
#include<stdio.h>

int main()
{
    int i;
    char str[100];

    printf("Enter a string: ");
    scanf("%s",&str);

    for(i=0;;i++)
    {
        if(str[i]=='\0')
        break;
    }

    printf("\nLength of string = %d\n",i);
    return 0;
}
