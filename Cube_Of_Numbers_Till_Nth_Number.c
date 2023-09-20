#include<stdio.h>
#include<conio.h>
void main ()
{
    int i=1,n,cube;
    printf("Enter the N th Number to calculate cube:\n");
    scanf("%d",&n);
    while(i<=n)
    {
        cube=i*i*i;
        printf("%d and cube of the %d is :%d\n",i,i,cube);
        i++;
    }
}