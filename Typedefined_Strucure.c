#include<stdio.h>
 typedef struct student
 {
    int rollno;
    char name[20];
    float marks;
 }pupil;

 void main()
{
    pupil a={10,"Akash",90.87};
    pupil b={11,"Rupam",86.9};
    pupil c={12,"Sayan",84.89};


    printf("\nStudent 1 Information --\n");

    printf("Name: %s\n",a.name);
    printf("Rollno: %d\n",a.rollno);
    printf("Marks: %f\n",a.marks);

    printf("\nStudent 2 Information --\n");

    printf("Name: %s\n",b.name);
    printf("Rollno: %d\n",b.rollno);
    printf("Marks: %f\n",b.marks);

    printf("\nStudent 3 Information --\n");

    printf("Name: %s\n",c.name);
    printf("Rollno: %d\n",c.rollno);
    printf("Marks: %f\n",c.marks);
}