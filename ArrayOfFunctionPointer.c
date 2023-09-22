#include<stdio.h>
#include<stdlib.h>

void add(int,int);
void sub(int,int);
void mul(int,int);
void divi(int,int);
void mod(int,int);

void add(int a,int b)
{
    printf("Addition of %d and %d is = %d",a,b,a+b);
}

void sub(int a,int b)
{
    printf("Substraction of %d and %d is = %d",a,b,a-b);
}

void mul(int a,int b)
{
    printf("Multiplication of %d and %d is = %d",a,b,a*b);
}

void divi(int a, int b)
{
    printf("Division of %d and %d is = %d",a,b,a/b);
}

void mod(int a,int b)
{
    printf("Modulus of %d and %d is = %d",a,b,a%b);
}

void main()
{
    jump:
    system("cls");
    int choice,a,b;
    void (*funptr[10])(int ,int )={add,sub,mul,divi,mod};

    printf("Enter 0 to Add, 1 to Sub, 2 to Mul, 3 to Div, 4 to Mod: ");
    scanf("%d",&choice);

    if(choice>4 || choice<0)
    {
        printf("Enter Valid Input !, Press any key to continue.");
        getch();
        goto jump;
    }
    else
    {
        printf("Enter two numbers:");
        scanf("%d %d",&a,&b);

        (*funptr[choice])(a,b);
    }
}