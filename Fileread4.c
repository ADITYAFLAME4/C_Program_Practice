#include<stdio.h>
#include<stdlib.h>

void main()
{
    FILE *fp =NULL;
    char str[10];

    fp =fopen("Test1.txt","r");

    if(fp == NULL)
    {

        printf("Error! No file present as Test1.txt.");
        exit(1);
    }
    while(!feof(fp))
    {
    fgets(str,9,fp);
    printf("%s",str);
    }
    fclose(fp);

}