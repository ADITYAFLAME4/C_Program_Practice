#include<stdio.h>

union abc
{
    int a;
    char b;
    float c;
};

void main()
{
    union abc u;
    union abc *ptr=&u;

    u.a=1;
    u.b=97;
    //u.c=9.2;

    printf("a= %d",u.a);
    printf("\nb= %c",u.b);
   // printf("\nc= %f",u.c);
}