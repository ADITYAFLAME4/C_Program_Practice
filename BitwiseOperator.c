#include<stdio.h>
#include<conio.h>
void main()
{
    int a=10,b=6;
    printf("\n%d",a&b);
    printf("\n%d",a|b);
    printf("\n%d",a^b);
    printf("\n%d",a&b && b+1 || 0 && b++);
    printf("\n%d",b);
    //printf("\n%d",b);

}