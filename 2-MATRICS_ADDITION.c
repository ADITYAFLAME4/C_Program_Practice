#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10][10],b[10][10],sum[10][10],r,c,i,j;
    printf("Enter the Row and Column:\n");
    scanf("%d%d",&r,&c);

    //To Initialise the 1st Matrix
    printf("Enter the 1st %d X %d Matrix:\n",r,c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter the %d,%d Element of 1st Matrix:\n",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    //To Initialise the 2nd Matrix
    printf("\n\nEnter the 2nd %d X %d Matrix:\n",r,c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter the %d,%d Element of 2nd Matrix:\n",i,j);
            scanf("%d",&b[i][j]);
        }
    }

    //To Print the 1st Matrix
    printf("The 1st %d X %d Matrix you have entered is:\n",r,c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    //To Print the 2nd Matrix
    printf("The 2nd %d X %d Matrix you have entered is:\n",r,c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }

    //To Print the SUM of 2 Matrics
    printf("The Sum of this %d X %d Matrics is:\n",r,c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }

}