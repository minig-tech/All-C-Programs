#include<stdio.h>

int main()
{

         int i,a,pay;

            for(i=1;i<=10;i++)
            {
                printf("\nEmployee no. %d, Enter no. of hours worked: ",i);
                scanf("%d",&a);

                if(a>40)
                {a = a-40;
                pay= a*12;
                printf("\nYour overtime pay = %d\n",pay);
                }

                else if(a<=40)
                    printf("\nNo overtime pay\n");
            }

            return 0;

}
