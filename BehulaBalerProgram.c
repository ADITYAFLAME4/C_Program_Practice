#include<conio.h>
#include<stdio.h>
void main()
{
    int i,j;
    printf("--------------\n");
    for(i=0;i<=20;i++)
    {
        printf("|%d",i);
    }
    printf("|------------|");
    for(j=20;j>=0;j--)
    {
        printf("\n|--|\n");
        printf("%d",j);
    }
}