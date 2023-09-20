#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void sum(void);
void mul(void);
void sub(void);
void div(void);
void mod(void);

void main()
{
    char ch;
    printf("Press + to add, - to substract , *  to Multiply, / to devide and %% to Mod:\n");
    scanf("%c",&ch);
    switch (ch)
    {
    case '+':
        sum();
        break;
    
    case '-':
        sub();
        break;
    
    case '/':
        div();
        break;
    
    case '%':
        mod();
        break;
    
    case '*':
        mul();
        break;

    default:
        printf("Enter a valid Input.");
        break;
    }
}

void sum ()
{
    int a,b,sum=0;
    printf("Enter two numbers to add:\n");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("The Sum is = %d",sum);
}

void sub ()
{
    int a,b,sub=0;
    printf("Enter two numbers to Substract:\n");
    scanf("%d%d",&a,&b);
    sub=a-b;
    printf("The Substraction is = %d",sub);
}

void mul ()
{
    int a,b,mul=0;
    printf("Enter two numbers to Multiply:\n");
    scanf("%d%d",&a,&b);
    mul=a*b;
    printf("The Multiplication is = %d",mul);
}

void div ()
{
    int a,b,div=0;
    printf("Enter two numbers to devide:\n");
    scanf("%d%d",&a,&b);
    div=a/b;
    printf("The Division is = %d",div);
}

void mod ()
{
    int a,b,mod=0;
    printf("Enter two numbers to Mod:\n");
    scanf("%d%d",&a,&b);
    mod=a%b;
    printf("The Mod is = %d",mod);
}