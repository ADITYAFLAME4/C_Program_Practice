#include<stdio.h>
#include<conio.h>
void evenOdd(int);
void main()
{
    int number;
    printf("\nEnter a Number:\n");
    scanf("%d",&number);
    evenOdd(number);
}

void evenOdd(int check)
{
    if(check % 2==0)
    {
        printf("\nEven Number.");
    }
    else
    {
        printf("\nOdd Number.");
    }
}