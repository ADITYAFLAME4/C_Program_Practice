/*In Dynamic Memory Allocation Memory can't be freed automaticly, for that we must use free function.
If it were static in this below example it would give wrong answers as it the memory would be freed automaticly
after the display function returns the address of memory address and it would act like a dangling pointer.*/
#include<stdio.h>
#include<stdlib.h>
int *display();
int *display()
{
    int i, *ptr;
    ptr= (int*)malloc(3*sizeof(int));
    if(ptr== NULL)
    {
        printf("Unable to allocate dynamic memory !");
        exit(1);
    }
    printf("Enter the values:\n");
    for(i=0;i<3;i++)
    {
        scanf("%d",(ptr+i));
    }
    return ptr;
}

void main()
{
    int *ptr1,i;
    ptr1 = display();
    printf("Entered values are:\n");
    for(i=0;i<3;i++)
    {
        printf("%d\n",*(ptr1+i));
    }
    free(ptr1);
}