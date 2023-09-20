#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],i,odd=0,even=0;
    printf("Enter the 10 elements:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);

        if(a[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("\n Total even number counts are:%d\n",even);
    printf("\n And the elements are:");
    for(i=0;i<10;i++)
    {
        if(a[i]%2==0)
        {
           printf("\n%d\n",a[i]);
        }
    }

    printf("\n Total odd number counts are:%d\n",odd);
    printf("\n And the elements are:");
     for(i=0;i<10;i++)
    {
        if(a[i]%2!=0)
        {
           printf("\n%d\n",a[i]);
        }
    }
}