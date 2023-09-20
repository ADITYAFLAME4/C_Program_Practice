#include<stdio.h>
#include<conio.h>
int check(int,int);

void main()
{
    int x,y,z;
    printf("\nEnter 2 Numbers:\n");
    scanf("%d%d",&x,&y);
    z=check(x,y);
    if(z>0)
    {
        printf("%d is the biggest number you have entered.",z);
    }
    if(z==0)
    {
         printf("Both numbers are same.");
    }
}

int check(int a, int b)
{
    if(a>b)
    {
        return a;
    }
    if(a<b)
    {
        return b;
    }
    if(a==b)
    {
       return 0;
    }
}