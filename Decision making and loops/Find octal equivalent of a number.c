#include<stdio.h>

int main()
{
      int a,sum=0,b,c=1;

      printf("Enter an integer: ");
      scanf("%d",&a);

      for(;;c=c*10)
      {
          b=a%8;
          a=a/8;

          b=b*c;
          sum=sum+b;

          if(a==0)
            break;

      }
      printf("\noctal equivalent = %d\n",sum);

      return 0;
}
