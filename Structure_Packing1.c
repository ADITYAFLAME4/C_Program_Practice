#include<stdio.h>
//#pragma pack(1)

struct abc
{
    char a;
    //char c;
    int b;
    char c;
};

void main ()
{
    struct abc s;
    printf("%d",sizeof(s));
}