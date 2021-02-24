//Store Information of Students Using Structure
#include<stdio.h>

int main()
{
    struct student
    {
        char name[20];
        int roll_no;
        float marks;
    }a[10];

   for(int i=0;i<10;i++)

   {
       printf("Enter your first name,roll no. and marks: ");
    scanf("%s %d %f",&a[i].name,&a[i].roll_no,&a[i].marks);

   }


   printf("\nName   roll no.    marks\n");
     for(int i=0;i<10;i++)
    { printf("\n%s   %d   %f\n",a[i].name,a[i].roll_no,a[i].marks);
    }

    return 0;

}
