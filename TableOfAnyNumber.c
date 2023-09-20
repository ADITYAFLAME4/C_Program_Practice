#include<stdio.h>
#include<conio.h>
void main()
{
    int a,i,j,m;
    jump:
    printf("Enter the number to calculate it's table:\n");
    scanf("%d",&a);
    printf("What limit till the Table you want, 10 or 20?\n",j);
    scanf("%d",&j);
    if(j==10 || j==20)
    {
        for(i=1;i<=j;i++)
        {
            m=a*i;
            printf("\n%d X %d =%d",a,i,m);
        }
    }

    else{
        printf("Enter the valid input.\n");
        goto jump;
    }
    
}