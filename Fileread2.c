#include<stdio.h>
#include<stdlib.h>

void main()
{
    FILE *f_Pointer =NULL;
    char ch;

    f_Pointer =fopen("Test1.txt","r");

    if(f_Pointer == NULL)
    {

        printf("Error! No file present as Test1.txt.");
        exit(1);
    }
    while(!feof(f_Pointer))
    {
    ch=fgetc(f_Pointer);
    printf("%c",ch);
    }
    fclose(f_Pointer);

}