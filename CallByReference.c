#include<stdio.h>
#include<conio.h>
void fun(int*,int*);

void main()
{
    int x=5,y=7;
    fun(&x,&y);
    printf("\nThis is Main :\nX=%d \nY=%d",x,y);
}

void fun(int *a, int *b)
{
    *a=7;
    *b=5;
    printf("\nThis is Fun:\nX=%d \nY=%d",*a,*b);
}