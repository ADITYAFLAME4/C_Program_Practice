#include<stdio.h>
#include<conio.h>
void main()
{
    int a[]={10,11,-1,56,67,5,4};
    int *p,*q;
    int i;
    p=a;

    printf("%d\n",*p);
    printf("%d %d %d\n",(*p)++,*p++,*++p);
    q=p+3;
    printf("%d\n",*q-3);
    printf("%d\n",*--p+5);
    printf("%d\n",*p+*q);

    for(i=0;i<7;i++)
    {
        printf("%d\t",a[i]);
    }

}