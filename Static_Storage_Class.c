#include<stdio.h>
void display();

void main()
{
    display();
    display();
}

void display()
{
    static int x;
    x += 10;
    printf("\n x = %d",x);
}