#include<stdio.h>
void fun1();
void fun2();

void main()
{
    extern int x;
    printf("x= %d ",x);
    fun1();
    fun2();
}

void fun1()
{
    int x=1;
    x +=5;
    printf("\n x=%d",x);
}

void fun2()
{
    int y=4;
    y++;
    printf("\n y =%d",y);
}

int x = 10;