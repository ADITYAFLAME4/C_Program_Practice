#include<stdio.h>
#include<conio.h>
#define N 50
void main()
{
    int a[N][N],b[N][N],mul[N][N],r,c,r1,c1,k,i,j,sum;
    printf("Enter the Row and Column of 1st Matrix:\n");
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

    printf("\n\nEnter the Row and Column of 2nd Matrix:\n");
    scanf("%d%d",&r1,&c1);
    //To Initialise the 2nd Matrix
    printf("\n\nEnter the 2nd %d X %d Matrix:\n",r1,c1);
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
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
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }

    //TO Compute the Multiplication.
    if(r != c1)
    {
        printf("Multiplication not Possible as the Row count of 1st matrix is not equals to Column Count of 2nd Matrix.\n");
    }
    else
    {
        //The Resultant Matrix would be (Row no of Matrix 1) X (Column Number of Matrix 2)
        for(i=0;i<r;i++)
        {
            for(j=0;j<c1;j++)
            {
                //To Accessing the Row 0,0 of 1st Matrix and COlumn 0,0 of 2nd Matrix
                sum=0;
                for(k=0;k<r1;k++) // or we could write this, for(k=0;k<c;k++)
                {
                    sum=sum+(a[i][k]*b[k][j]);
                }

                mul[i][j]=sum;
            }
        }
    //To Print the Multiplication of 2 Matrics
    printf("The Multiplication of this Matrics is:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d\t",mul[i][j]);
        }
        printf("\n");
    }
    
    }

}