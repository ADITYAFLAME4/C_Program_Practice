#include<conio.h>
#include<stdio.h>
void main()
{
    int sum=0,j,i=0;
    do
    {
        i++;
        printf("Enter a number:");
        scanf("%d",&j);
        if(j<0)
        {
            break;
        }
        else
        {
            sum=sum+j;
        }
        
    } while (i<6);
    printf("%d",sum);
}