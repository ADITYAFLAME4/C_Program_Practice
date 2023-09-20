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
        for(row=1;row<=column;row++)
        {
            printf("*");
        }
        printf("\n");
    }
}