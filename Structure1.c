#include<stdio.h>

struct student
{

    int rollno;
    char name[20];
    float marks;
};

void main()
{
    struct student s1= {1, "Akash", 90};

    struct student s2= {2, "Ananya", 95};

    printf("Info for S1\n");
    printf("\n %d %s %f",s1.rollno,s1.name,s1.marks);

    printf("\nInfo for S2\n");
    printf("\n %d %s %f",s2.rollno,s2.name,s2.marks);
}