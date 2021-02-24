//Display Prime Numbers Between Intervals Using Function
#include<stdio.h>

void prime(int ,int );
int main()
{
    int a,b;

    printf("Enter two intervals: ");
    scanf("%d %d",&a,&b);


    prime(a,b);

    return 0;

}

void prime(int a,int b)

{
    int i,j,n;
   for(i=a;i<=b;i++)
   {
       if(i==1)
        continue;

        n=sqrt(i);

      for(j=2;j<=n;j++)
      {
          if(i%j==0) break;
      }
      j=j-1;
      if(j==n)
        printf("%d ",i);
   }


}
