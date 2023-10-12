#include<stdio.h>
struct abc
{
    char a;
    int b;
    double c;
};

void main ()
{
    struct abc s;
    printf("%d",sizeof(s));
}