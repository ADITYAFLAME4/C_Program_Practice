#include<stdio.h>

struct student
{
    int rollno;
    char name[20];
    float marks;
};

void main()
{
    int i,n;

    struct student s[3];

    //To scan structure inputs

    printf("How many students you want to entry:");
    scanf("%d",&n);
    
    for(i=0; i< n; i++)
    {
        printf("Enter the student %d Roll no:\n",i+1);

        scanf("%d",&s[i].rollno);

        printf("Enter the student %d Name:\n",i+1);

        scanf("%s",s[i].name);

        printf("Enter the student %d Marks:\n",i+1);

        scanf("%f",&s[i].marks);
    }

    printf("\n\n\n\n");

    //To print structures

    for(i=0; i<n; i++)
    {
        printf("Student %d Details:\n",i+1);

        printf("Roll no: %d\n",s[i].rollno);

        printf("Name: %s\n", s[i].name);

        printf("Marks: %f\n\n",s[i].marks);
    }


}