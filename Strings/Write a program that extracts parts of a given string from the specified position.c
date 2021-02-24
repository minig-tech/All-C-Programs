#include<stdio.h>

int main()
{
    char name[50],name1[50];
    int k=0,i,n,j;

    printf("Enter a string (maximum size = 50): ");
    gets(name);

    printf("Enter a position from which you want to extract characters: ");
    scanf("%d",&i);

    printf("Enter how many characters you want to extract: ");
    scanf("%d",&n);

    if(n!=0)

    {

    for(j=i-1;j<((i+n)-1);j++)
    {
        name1[k]=name[j];
        k++;
    }

     }

    else if(n==0)
    {

        for(j=i-1;;j++)
        {
            if(name[j]=='\0')
                break;

            name1[k]= name[j];
            k++;
        }


    }

    name1[k] = '\0';

    printf("\n%s\n",name1);



    return 0;

}
