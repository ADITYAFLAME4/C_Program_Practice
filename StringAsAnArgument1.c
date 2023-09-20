#include<stdio.h>
void display(char[]);
void main()
{
    char str[]="Akash";
    display(str);
}

void display(char str1[])
{
    printf("\nString is %s ",str1);
}