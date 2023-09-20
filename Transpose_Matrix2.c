#include<conio.h>
#include<stdio.h>
void main()
{
    int a[10][10],b[10][10],r,c,i,j;
    printf("Enter the Row and Column:\n");
    scanf("%d%d",&r,&c);

    //To take input of the matrix elements
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter the %d,%d Element:\n",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    //To print the Matrix
    printf("The Matrix is:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    //To Compute the transpose matrix

    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            b[i][j]=a[j][i];
        }
    }

    //To Print the Transpose Matrix
    printf("The transpose Matrix is:\n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
}