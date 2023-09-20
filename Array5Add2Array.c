#include<stdio.h>
#include<conio.h>
void main()
{
    int arr1[5],arr2[5],Sumarr[5],i;

    printf("\nEnter the 5 eliments of 1st Array:\n");
    for(i=0;i<5;i++)
        scanf("%d",&arr1[i]);
    printf("\nEnter the 5 eliments of 2nd Array:\n");
    for(i=0;i<5;i++)
        scanf("%d",&arr2[i]);

    for(i=0;i<5;i++)
        {
            Sumarr[i]=arr1[i]+arr2[i];
            printf("Sum of array elements at index %d = %d\n",i,Sumarr[i]);
        }
}