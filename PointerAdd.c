#include<stdio.h>
#include<conio.h>
void main()
{
    int a[5]={1,4,2,-8,0};
    int *p= &a[0];
    int i;
    printf("The Value is:%d\n",*p);
    printf("Address of element is:%u\n",p);

    p=p+2;

    printf("The Value is:%d\n",*p);
    printf("Address of element is:%u\n",p);

    *p=34;

    printf("The Value is:%d\n",*p);
    printf("Address of element is:%u\n",p);

    for(i=0;i<5;i++)
    {
        printf("%d",a[i]);
        printf(" ");
    }

}