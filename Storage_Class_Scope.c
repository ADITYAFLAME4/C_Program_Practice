#include<stdio.h>
#include<conio.h>
int a = 50;
int b = 100;
void fun();

int main()
{
    printf("Inside main b = %d\n",b);
    fun();

    //Block1

    {
        int a = 20;
        printf("Inside Block 1 a = %d\n",a);
    }

    //Block 2

    {
        printf("Inside Block 2 a = %d\n",a++);
    }

    printf("Inside Main function a = %d\n",a);
    return 0;
}

void fun()
{
    int a = 30, b = 10;
    printf("Inside fun Function a is = %d\n",a);
    printf("Inside fun Function b is = %d\n",b);
}