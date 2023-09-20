#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    printf("Enter your marks:");
    scanf("%d",&i);

    switch (i)
    {
    case 80 ... 100:
            printf("Your Grade is A");
        break;

    case 70 ... 79:
            printf("Your Grade is B");
        break;
    
    case 60 ... 69:
            printf("Your Grade is C");
        break;
    default:
            printf("You are not passed !");
        break;
    }
    return 0;
}