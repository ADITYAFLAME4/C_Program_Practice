#include<stdio.h>
#include<conio.h>
void main()
{
    int i,a,n,d;
    printf("\nEnter the number of array elements:");
    scanf("%d",&a);

    int arr[a];
    printf("\nEnter the array elements:");
    for(i=0;i<=a-1;i++)
    {
        scanf("%d",&arr[i]);
    }


    printf("Array Elements are stored Successfully !");
    getch();

    printf("\nTo read array elements Press 1,\n To read array elements in reverse order Press 2,\nTo read a print a particular array element press 3\n");
    scanf("%d",&n);

    switch (n)
    {
    case 1:
        for(i=0;i<=a-1;i++)
        {
            printf("Array elements at index %d is %d\n",i,arr[i]);
        }
        break;

    case 2:
        for(i=a-1;i>=0;i--)
        {
            printf("Array elements at index %d is %d\n",i,arr[i]);
        }
        break;

    case 3:
        printf("Enter the index number of the array element, which you want to read:\n");
        scanf("%d",&d);

        printf("\nThe element at %d th Index of the array is %d !",d,arr[d]);
    
    default:
        break;
    }

}