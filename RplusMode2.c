#include<stdio.h>
#include<stdlib.h>
void main()
{
    char ch;
    FILE *fp= NULL;
    fp=fopen("Test3.txt","r+");

    if(fp==NULL)
    {
        printf("Error!");
        exit(1);
    }
    while(!feof(fp))
    {
        ch=fgetc(fp);
        printf("%c",ch);
    }
    //Main content was Hello there, and cursor is at end so Ananya will be printed at end.
    // In file now it should store, Hello there,Ananya
    fputs("Ananya",fp);
    fclose(fp);
}