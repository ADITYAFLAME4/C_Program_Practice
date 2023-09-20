#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k;
    while(k<3)
    {
    for(i=0; i<=2; i++)
    {
        printf("*\n");
        for(j=1;j<=3;j++)
        {
        printf("* ");
        }
    }
    printf("\n");
    k++;
    }
}