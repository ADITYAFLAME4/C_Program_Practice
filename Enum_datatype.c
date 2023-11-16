#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    char ch;
    enum gender {Male, Female, Others};
    enum gender Customer;
    flag:
    printf("Enter 'M for Male' , 'F for Female' and 'O for Others'. Customer Gender? :");
    scanf("%c",&ch);
    switch (ch)
    {
    case 'M':
    {
        Customer= Male;
        break;
    }
     case 'm':
    {
        Customer= Male;
        break;
    }
    case 'F':
    {
        Customer= Female;
        break;
    }
     case 'f':
    {
        Customer= Female;
        break;
    }
    case 'O':
    {
        Customer= Others;
        break;
    }
     case 'o':
    {
        Customer= Others;
        break;
    }
    default:
    {
        printf("Enter a Valid input!");
        goto flag;
        break;
    }
}
if(Customer== Male)
{
    printf("The Customer is Male! 25%% discount.");
}
else if(Customer== Female)
{
    printf("The Customer is Female! 50 %% Discount.");
}
else{
    printf("60%% discount.");
}
}