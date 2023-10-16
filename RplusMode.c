#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp= NULL;
    fp=fopen("Test2.txt","r+");

    if(fp==NULL)
    {
        printf("Error!");
        exit(1);
    }

    fputs("Ananya",fp);
    fclose(fp);
}