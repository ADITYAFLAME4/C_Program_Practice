#include<stdio.h>
#include<conio.h>
void main ()
{
    int i=1,n,sum=0;
    printf("Enter the n th Term:");
    scanf("%d",&n);
     printf("The natural numbers till %d th term are: \n",n);
    while(i<=n)
    {
       printf(" %d ",i);
        sum=sum+i;
        i++;
    }
    printf("\nThe sum till %d th term natural numbers is: %d\n",n,sum);


}