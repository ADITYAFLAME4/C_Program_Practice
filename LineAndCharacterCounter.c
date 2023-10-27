#include<stdio.h>
#include<stdlib.h>

void main()
{
    FILE *fp = NULL;
    char c;
    int line_counter = 1, character_counter=0;
    fp = fopen("Test1.txt", "r");

    if(fp == NULL)
    {
        printf("NO SUCH FILE EXISTS!");
        exit(1);
    }

    while( (c=fgetc(fp)) != EOF )
    {
        character_counter = character_counter +1;

        if(c == '\n')
        {
            line_counter = line_counter +1;
        }
    }

    fclose(fp);

    printf("\nThere are %d Lines in this file.\n",line_counter);
    printf("And this file containing  %d Characters.\n",character_counter);

}