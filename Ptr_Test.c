#include<stdio.h>
int main()
{
    int age =22;
    int *ptr = &age;
    int val = *ptr;
    //Printing the address of int age in 2 different way.

    printf("%p\n", &age);

    printf("%p\n", val);

    return 0;
}