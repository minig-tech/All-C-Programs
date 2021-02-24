#include<stdio.h>

int main()
{
    int i;
    for(i=1;i<12;i++)
    {
        printf("\n%d PM\n",i);
    }

    printf("\n12 at midnight\n");

    for(i=1;i<12;i++)
    {
        printf("\n%d AM\n",i);
    }

    printf("\n12 at noon\n");
}
