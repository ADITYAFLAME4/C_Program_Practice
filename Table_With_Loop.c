#include<stdio.h>
#include<conio.h>
void main ()
{
    int i=1,n,mul;
    printf("Enter the Number to calculate the Table:\n");
    scanf("%d",&n);
    while(i<=10)
    {
        mul=n*i;
        printf("%d X %d = %d\n",n,i,mul);
        i++;
    }
}