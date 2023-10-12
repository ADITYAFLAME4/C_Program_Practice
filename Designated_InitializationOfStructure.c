#include<stdio.h>
struct question
{
    int a;
    float b;
    int c;
};

void main()
{
    struct question q={.b=1,.c=10,.a=15};

    printf("%d \n %f \n %d",q.a , q.b , q.c);
}