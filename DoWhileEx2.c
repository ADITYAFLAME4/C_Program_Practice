#include<conio.h>
#include<stdio.h>
void main()
{
    int i,sum;
    do
    {
        printf("Enter the Number:");
        scanf("%d",&i);
            if(i<0)
            {
                break;
            }
            else
            {
                sum=sum+i;
            }
     }
    while(1);

    printf("%d",sum);
}