#include<stdio.h>
#include<conio.h>
void main ()
{
    int i=1,n,sum=0;
    float avg=0;
    printf("Enter the 10 Numbers:\n");
    
    while(i<=10)
    {
        scanf("%d",&n);
        sum=sum+n;
        i++;
    }
    printf("\nThe sum of 10 Numbers you have enterd is: %d\n",sum);
    avg=sum/10;
    printf("The Avg of the numbers is:%f \n",avg);


}