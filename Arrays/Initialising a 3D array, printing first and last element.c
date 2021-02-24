#include<stdio.h>

int main ()
{
    int num[3][2][3] = {

                        {  {1,2,3},
                           {4,5,6}  } ,

                        {  {7,8,9},
                          {10,11,12}  },

                        {   {13,14,15},
                           {16,17,18}   }

                         } ;


   printf("First element = %d\nLast element = %d\n",num[0][0][0],num[2][1][2]);


    return 0;

}
