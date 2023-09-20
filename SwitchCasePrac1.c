#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("Enter the 2 numbers to calculate:");
    scanf("%d %d",&a,&b);
    printf("Enter the Operator ('+' '-' '*' '/' '%%') :");
    getchar();
    switch (getchar())
    {
    case '+':
            {
            c=a+b;
            printf("Addition of %d and %d is %d",a,b,c);
            break;
            }
    
    case '-':
            {
            c=a-b;
            printf("Substraction of %d and %d is %d",a,b,c);
            break;
            }

    case '*':
            {
            c=a*b;
            printf("Multipication of %d and %d is %d",a,b,c);
            break;
            }

    case '/':
            {
            c=a/b;
            printf("Division of %d and %d is %d",a,b,c);
            break;
            }

    case '%':
            {
            c=a%b;
            printf("Modulus of %d and %d is %d",a,b,c);
            break;
            }        
    
    default:
            printf("Enter the valid input:");
        break;
    }
    getch();
}