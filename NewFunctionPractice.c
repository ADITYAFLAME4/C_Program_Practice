#include<stdio.h>
#include<conio.h>
char fun();
void main()
{
    char ch;
    ch= fun();
    printf("Character is = %c",ch);

}

char fun()
{
    char c;
    printf("Enter a Character:");
    scanf("%c",&c);
    return c;
}