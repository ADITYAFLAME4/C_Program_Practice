#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10][10],i,j,r,c,sumRow[10]={0},sumColumn[10]={0};
    printf("Enter the Row and Columns:\n");
    scanf("%d %d",&r,&c);
    //To scan the Matrix
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter the %d,%d Element:\n",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    //TO print the Matrix
    printf("The matrix you have entered is:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    //TO compute the sum of individual Row
    for(i = 0; i < r; i++)
    {   
        for(j = 0; j < c; j++)
        {
        sumRow[i] =sumRow[i]+ a[i][j];
        }
    printf("The SUM of Row %d is %d\n", i, sumRow[i]);
    }
    //TO compute the sum of individual Column
    for(j = 0; j < c; j++)
    {   
        for(i = 0; i < r; i++)
        {
            sumColumn[j] =sumColumn[j]+ a[i][j];
        }
        printf("The SUM of Column %d is %d\n", j, sumColumn[j]);
    }
}


