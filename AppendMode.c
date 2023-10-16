#include<stdio.h>
#include<stdlib.h>
void main()
{
    char ch;
    FILE * fptr= NULL;
    fptr= fopen("Test5.txt","a+");

    if(fptr==NULL)
    {
        printf("Error!");
        exit(1);
    }

    fputs(" ,this is awesome!",fptr);

    rewind(fptr);

    while(!feof(fptr))
    {
        ch= fgetc(fptr);
        printf("%c",ch);
    }

    fclose(fptr);
}