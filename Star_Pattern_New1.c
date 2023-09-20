#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n;
    printf("Enter the number of lines you want to Print '*' :\n ");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        j=1;
        while(j<=i)
        {
            printf("*");
            j++;
        }
        printf("\n");
        i++;

    }

}