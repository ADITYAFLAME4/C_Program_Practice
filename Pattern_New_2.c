#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n;
    printf("Enter the number of lines you want to Print Pattern :\n ");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        j=1;
        while(j<=i)
        {
            printf("%d",j);
            j++;
        }
        printf("\n");
        i++;

    }

}