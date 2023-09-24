#include<stdio.h>

void print(int);

void print (int a)
{
    if(a<1)
        return;
    else
        printf("%d",a);
    
    print(a/2);
    printf("%d",a);
}

void main()
{
    print(10);
}