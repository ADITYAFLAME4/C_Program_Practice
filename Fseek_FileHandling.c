#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
    FILE *fp= NULL;
    char ch;

    fp=fopen("NewTest.txt", "r");

    if(fp==NULL)
    {
        printf("Error!");
        exit(1);
    }

    fseek(fp,3,SEEK_SET);
    ch=fgetc(fp);
    printf("\n%c",ch);

    fseek(fp,-3,SEEK_CUR);
    ch=fgetc(fp);
    printf("\n%c",ch);

    fseek(fp,-3,SEEK_END);
    ch=fgetc(fp);
    printf("\n%c",ch);

    fclose(fp);
}