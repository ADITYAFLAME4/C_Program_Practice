#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void restart(void);

void restart()
{
    getch();
    system("cls");
}
void main()
{
    int a;
    char ch;
    start:
    printf("Please enter your marks:\n");
    scanf("%d",&a);
    if(a>100)
    {
        printf("Marks cannot be greater than 100, Please give a valid input.");
        restart();
        goto start;
       
    }

    switch(a)
    {
        case 100:
            printf("Your Grade is A+ .");
            break;
        case 99:
        case 98:
        case 97:
        case 96:
        case 95:
        case 94:
        case 93:
        case 92:
        case 91:
        case 90:
            printf("Your Grade is A .");
            break;
        case 89:
        case 88:
        case 87:
        case 86:
        case 85:
        case 84:
        case 83:
        case 82:
        case 81:
        case 80:
            printf("Your Grade is B+ .");
            break;
        case 79:
        case 78:
        case 77:
        case 76:
        case 75:
        case 74:
        case 73:
        case 72:
        case 71:
        case 70:
            printf("Your Grade is B .");
            break;
        case 69:
        case 68:
        case 67:
        case 66:
        case 65:
        case 64:
        case 63:
        case 62:
        case 61:
        case 60:
            printf("Your Grade is C+ .");
            break;
        case 59:
        case 58:
        case 57:
        case 56:
        case 55:
        case 54:
        case 53:
        case 52:
        case 51:
        case 50:
            printf("Your Grade is C .");
            break;
        default: 
            printf("You have faild the exam!");
    }
    printf("To calculate again press Enter or any key to exit:");
    ch = getchar();
    if(ch == '\n')
    {
        restart();
        goto start;
    }


}