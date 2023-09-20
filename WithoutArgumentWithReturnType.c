#include<stdio.h>
#include<conio.h>

char letters(void);

void main()
{
    char s;
    s=letters();
    printf("\nThe Letter You have entered is:%c ",s);
}

char letters()
{
    char t;
    printf("\nEnter any Letter:");
    scanf("%c",&t);
    //return t;
    return 'a','0','1';
}