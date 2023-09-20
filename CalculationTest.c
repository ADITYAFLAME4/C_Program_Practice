#include<conio.h>
#include<stdio.h>
void main()
{
    int a=18,b=9,c,d,e=10,f;

    c=b++;
    d=b;
    f=a>b>d<c;
    printf("%d\n",f!=1);
    printf("%d",a+c==b>=c<c+d!=1);
    
    getch();
}