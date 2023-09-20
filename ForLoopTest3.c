#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n; )
    {
        for(j=1;j<=2;j++)
        {
            printf("%3d",i);
            i++;
        }
        printf("\n");
    }
}