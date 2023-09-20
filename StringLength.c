#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int count=0,i=0, count2=0;
    char name[30];
    printf("Enter your Name:");
    gets(name);
    puts(name);
    count= strlen(name);

    printf("The Length (With strlen function) of the Name you have eneterd is : %d\n",count);

    while(name[i] != '\0')
    {
        count2++;
        i++;
    }
    printf("\nThe Length (Without strlen function) of the Name you have eneterd is : %d",count2);
}