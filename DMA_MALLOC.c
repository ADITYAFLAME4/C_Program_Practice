#include<stdio.h>
#include<stdlib.h>

void main()
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

     //Accessing the values in dynamic memory
    printf("Entered values are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",*(ptr+i));
    }
    
    //Freeing the dynamic memory after use.
    free(ptr);
}