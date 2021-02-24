//Store Information of a Student Using Structure
#include<stdio.h>

int main()
{
    struct student
    {
        char name[100];
        int roll_no;
        float marks;
    }a;

    printf("Enter your first name,roll no. and marks: ");
    scanf("%s %d %f",&a.name,&a.roll_no,&a.marks);

    printf("Your name = %s\nYour roll no. = %d\nYour marks = %f\n",a.name,a.roll_no,a.marks);

    return 0;

}
