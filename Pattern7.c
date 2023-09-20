#include<stdio.h>
#include<conio.h>
void main()
{
    int column,row,a;
    printf("Enter the number of row you want to print:");
    scanf("%d",&a);
    printf("\n");
    for(column=1;column<=a;column++)
    {
        for(row=1;row<=a;row++)
        {
            if(column+row<=a)
                printf(" ");
            else
            printf("*");
        }
        printf("\n");
    }
}