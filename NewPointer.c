#include<stdio.h>
#include<conio.h>
void main()
{
    int a[]={99,255,11,12,56,67,5,4};
    int *p,*q;
    p=&a[3];
    q=&a[2];
    printf("\n%d",(*p)++);//12 p=13
    printf("\n%d",++(*p));//14
    printf("\n%d",*q);//11
    printf("\n%d",* ++q);//14
    //printf("\n%d",(*q)++);
    //printf("\n%d %d",*q,*p);

   
}