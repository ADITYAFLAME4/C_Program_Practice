#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,a[2][3],b[3][2],r,c;
    printf("Enter the Row and Columns:\n");
    scanf("%d%d",&r,&c);
    printf("Enter the %dX%d Matrix Elements:\n",r,c);

    //To Scan the elements of  Matrix.
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter the %d,%d Element:\n",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    // To print the Matrix
    printf("The %dX%d matrix you have entered is:\n",r,c);
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    
    // To compute the Transpose.
     for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
          b[i][j]=a[j][i]; 
        }
    }


    //To print the transpose
     printf("The %dX%d Transpose matrix is:\n",c,r);
     for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    } 

}