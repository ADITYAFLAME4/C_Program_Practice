#include<stdio.h>
#include<conio.h>
void f (int *p, int m)
{
    m=m+5;
    *p=*p+m;
    return;
}

void main()
{
    int i=5,j = 10;
    f(&i,j);
    printf("%d",i+j);
}