#include<stdio.h>
#include<conio.h>
void main()
{
    int column,row,a;
    char b='A';
    printf("Enter the number of row you want to print:");
    scanf("%d",&a);
    printf("\n");
    for(column=1;column<=a;column++)
    {
        for(row=a;row>=column;row--)
        {
            printf("%c",b);
            b++;
        }
        //b++;
        printf("\n");
    }
}