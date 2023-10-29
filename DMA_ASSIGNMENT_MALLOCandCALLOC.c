#include<stdio.h>
#include<stdlib.h>

void main()
{
    int n,i, *ptr;
    printf("Enter Total Number Of Values:");
    scanf("%d",&n);

    //Malloc gives garbage values and calloc gives 0 (s) as auto initialised values.
    //ptr = (int*)malloc(n*sizeof(int));
    ptr= (int*)calloc(n,sizeof(int));
    if(ptr== NULL)
    {
        printf("Unable to allocate dynamic memory !");
        exit(1);
    }

     //Accessing the auto initialised values in dynamic memory
    printf("Auto Initialised values are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d \t ",*(ptr+i));
    }
    
    //Freeing the dynamic memory after use.
    free(ptr);
}