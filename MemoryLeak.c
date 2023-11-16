#include<stdio.h>
#include<stdlib.h>
void main()
{
    int ch = 1;
    int *ptr;
     while(ch<50)
     {
        printf("Memory Leak demo!\n");
        ptr = (int*)malloc(40000* sizeof(int));
        printf("Continue?? Press between 1 to 50");
        scanf("%d",&ch);
     }
}