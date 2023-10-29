#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i, *ptr;
    printf("Enter Total Number Of Values:");
    scanf("%d",&n);

    //Allocating Dynamic memory and typecasting it into Int
    ptr= (int*)malloc(n*sizeof(int));
    if(ptr== NULL)
    {
        printf("Unable to allocate dynamic memory !");
        exit(1);
    }

    //Initilising the values in dynamic memory
    printf("Enter the values:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }

    //Reallocating the memory block.
    printf("Enter the new value of n:");
    scanf("%d",&n);

    int *ptr1 = (int*)realloc(ptr,n*sizeof(int));

    //Printing the old and new memory address( Might be or might not be same.)

    printf("The old Memory block address was : %d \nThe new Memory block address is: %d\n",ptr,ptr1);

     //Accessing the values in dynamic memory
    printf("Entered values are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",*(ptr1+i));
    }
    
    //Freeing the new dynamic memory after use.
    free(ptr1);
}