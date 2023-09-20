#include<stdio.h>
#include<conio.h>
int main()
{
    //char op;
    int a,b,c;
    printf("\nEnter 2 numbers\n");
    scanf("%d %d",&a,&b);
    printf("\nPress '+' to Add them, '-' to substract them,'*' to Multiply them\n '/' to devide them, and '%%' sign to calculate mod.");
    //scanf("%c",&op);
    getchar();

    switch(getchar())
    {

    case '+':
            {
        c=a+b;
        printf("\nAddition is %d",c);
        break;
            }
    case '-':
            {
        c=a-b;
        printf("\nSubstraction is %d",c);
        break;
            }
    case '*':
            {
        c=a*b;
        printf("\nMultipication is %d",c);
        break;
            }
    case '/':
        {
        c=a/b;
        printf("\nDivision is %d",c);
        break;
        }
    case '%':
    {
        c=a%b;
        printf("\nMod is %d",c);
        break;
    }
    default:
    {
        printf("\nEnter the valid Input:");
    }
    }
    return 0;
}