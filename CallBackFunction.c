#include<stdio.h>

void sum (int,int);
void sub (int,int);
void display(void (*)(int,int));

void sum(int a, int b)
{
    printf("\nSum is= %d",a+b);
}

void sub(int a, int b)
{
    printf("\nSub is= %d",a-b);
}

void display(void(*functionptr)(int, int ))
{
    functionptr(5,1);
}

void main()
{
    //Or we can Use display(&sum)
    display(sum);
    //Or we can Use display(&sub)
    display(sub);
}