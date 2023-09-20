#include<stdio.h>
#include<conio.h>
int smaller(int a ,int b);
void main()
{
    int a,b,x;
    printf("Enter 2 numbers:\n");
    scanf("%d %d",&a ,&b);
    //Ternary Operator
    x=(a>b)?a:b;
    printf("The bigger number is:%d",x);
    int m = smaller(a,b);
    printf("The smaller number is:%d",m);
}

int smaller(x,k)
{   int y;
    y=(x<k)?x:k;
    return y;
}
