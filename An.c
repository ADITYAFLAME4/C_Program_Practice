#include<stdio.h>
#include<conio.h>
void main()
{   int i;
    jump:
    printf("Hi,Ananya!\n");
    printf("press 1 or 2");
    scanf("%d",&i);
    if(i==1)
    {
        printf("Love you baby!\n");
        getch();
        goto jump;
    }
    else if(i==2)
    {
        printf("Miss you soo much!\n");
        getch();
        goto jump;

    }
    else
    {
        printf("Enter a valid input, i.e 1 or 2");
        getch();
        goto jump;
    }
    
}