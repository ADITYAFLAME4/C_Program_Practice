#include<stdio.h>
#include<stdlib.h>

void main()
{
    int n,i, *ptr,num;
    float *ptr1;
    printf("Enter Total Number Of INT Values:");
    scanf("%d",&n);

    //Allocating Dynamic memory and typecasting it into Int
    ptr= (int*)calloc(n,sizeof(int));
    if(ptr== NULL)
    {
        printf("Unable to allocate dynamic memory !");
        exit(1);
    }

    //Initilising the values in dynamic memory
    printf("Enter the INT values:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }

     //Accessing the values in dynamic memory
    printf("Entered INT values are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d \t",*(ptr+i));
    }
    
    //Freeing the dynamic memory after use.
    free(ptr);

    printf("Enter Total Number Of FLOAT Values:");
    scanf("%d",&num);
     //Allocating Dynamic memory and typecasting it into float
    ptr1 = (float*)malloc(num*sizeof(float));
    if(ptr== NULL)
    {
        printf("Unable to allocate dynamic memory !");
        exit(1);
    }

    //Initilising the values in dynamic memory
    printf("Enter the FLOAT values:\n");
    for(i=0;i<num;i++)
    {
        scanf("%f",(ptr1+i));
    }

     //Accessing the values in dynamic memory
    printf("Entered FLOAT values are:\n");
    for(i=0;i<num;i++)
    {
        printf("%f \t",*(ptr1+i));
    }
    
    //Freeing the dynamic memory after use.
    free(ptr1);
}