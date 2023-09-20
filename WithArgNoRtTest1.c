#include<stdio.h>
#include<conio.h>
void sum(int,float);

void main()
{
    int x;
    float y;
    printf("\nEnter a Int and a Float Number:\n");
    scanf("%d%f",&x,&y);
    sum(x,y);
}

void sum(int a, float b)
{
    float sum=0;
    sum=a+b;
    printf("SUM= %f",sum);
}