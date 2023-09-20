#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("Enter 3 Numbers:");
    scanf("%d %d %d",&a,&b,&c);

    if(a>b)
    {
        if(a>c)
        {
            printf("%d is the largest among 3",a);
        }
        else
        {
            printf("%d is the largest number among 3",c);
        }

    }
    else if(b>c || b<c)
    {
        if(b>c)
        {
            printf("%d is the largest number among 3",b);
        }
        else
        {
            printf("%d is the largest number among 3",c);
        }
    }
    else
    {
        printf("All numbers are equal");
    }
    getch();
}