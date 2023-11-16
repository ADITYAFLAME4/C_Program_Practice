#include<stdio.h>
void display()
{
    extern int x;
    printf("Hello from Support Class!");
    printf("\n x=%d",x);
    ++x;
    printf("\n New x=%d",x);
}