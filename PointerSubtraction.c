#include<stdio.h>
#include<conio.h>
void main()
{
    int a[]={2,4,3,0,-7};
    int *p=a;           //pointing to base address of array a
    int *q=&a[3];       //Pointing to 3rd eliment address of array a
    
    printf("q-p = %d\n",q-p);
    printf("p-q = %d\n",p-q);
    printf("Value = %d\n",*q);
    q=q-2;
    printf("Value = %d\n",*q);
    p=p+2;
    printf("q-p = %d\n",q-p);
    q=q-2;
    printf("Value = %d\n",*q);
}