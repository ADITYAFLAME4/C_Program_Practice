#include<stdio.h>
#include<conio.h>
void main ()
{
    int i=1,j=1,n;
    printf("Enter the Nth Number to Print the Table from 1 to :");
    scanf("%d",&n);
    printf("Multipication Table from 1 to %d is:\n",n);
    while(i<=10)
    {
        while(j<=n)
        {
            printf("%d X %d =%d\t",j,i,j*i);
            j++;
        }
        j=1;
        printf("\n");
        i++;
    }
}