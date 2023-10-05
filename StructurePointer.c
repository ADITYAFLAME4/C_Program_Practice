#include<stdio.h>

struct student
{
    int rollno;
    char name[20];
    float marks;
};

struct student s1= {1,"Akash",90};

void main()
{

    // (*ptr1).rollno  [is equal to]  ptr1->rollno
    struct student *ptr1 = &s1;

    struct student s2;

    struct student *ptr2 = &s2;
    //Defining Student 2  in 2 different pointer methods (Meaning same of each)
    printf("Enter the student 2 details.\n");
    printf("Enter Student 2 Rollno:\n");
    scanf("%d",&(*ptr2).rollno);
    printf("Enter student 2 name:\n");
    scanf("%s",(*ptr2).name);
    printf("Enter Student 2 marks:\n");
    scanf("%f",& ptr2->marks);


    //Printing Student 1 Data
    printf("\n\n\n");
    
    printf("\n Student 1 rollno is:%d",s1.rollno); //Accessing without pointer structure.

    printf("\n Student 1 Name is :%s ", ptr1->name);

    printf("\n Student 1 marks is : %f",ptr1->marks);

    //Printing Student 2 Data
    printf("\n\n\n");
    
    printf("\n Student 2 rollno is:%d",(*ptr2).rollno); 

    printf("\n Student 2 Name is :%s ", (*ptr2).name);

    printf("\n Student 2 marks is : %f",(*ptr2).marks);


    //Modifing Student 2 Data

    (*ptr2).rollno=3;
    //Facing some error while changing name, as was using (*ptr).name insteed of (*ptr).name[20]
    (*ptr2).name[20] ="NewName";   
    (*ptr2).marks=84.995;

    //Printing Student 2 modified data.
    printf("\n\n\n New data of student 2\n");

    printf("\n Student 2 rollno is:%d",ptr2->rollno); 

    printf("\n Student 2 Name is :%s ", (*ptr2).name);

    printf("\n Student 2 marks is : %f",(*ptr2).marks);

}