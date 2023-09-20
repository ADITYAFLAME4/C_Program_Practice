#include<stdio.h>
#include<conio.h>
int main()
{
    int values[20],i,n;
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("Enter %d integers:\n",n);
    // taking input and storing it in an array
    for(int i = 0; i < n; i++) 
    {
        scanf("%d",&values[i]);
    }
    printf("Displaying integers:\n");
    // printing elements of an array
    for(int i = 0; i < n; i++) 
    {
        printf("\n%d",values[i]);
    }
    return 0;
}