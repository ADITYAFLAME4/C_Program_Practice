#include<stdio.h>
#include<conio.h>
void main ()
{
    int i=1,j=1,sum=0,n;
    printf("Enter the Nth Number :");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d\t",(i*2-1));
        sum=sum+(i*2-1);
        i++;
    }
     printf("\nThe Sum of first %d odd Natural Numbers is: %d",n,sum);
}