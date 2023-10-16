#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *f_p = NULL;
    char str[50];
    f_p=fopen("Test1.txt","a");

    if(f_p == NULL)
    {
        printf("Error! No file is there.");
        exit(1);
    }

    printf("Enter the line you want to Append:\n");
    gets(str);

    //fputs(str,f_p); This will add the string at the ending of last line, no spaces or newline character will be there.

    fprintf(f_p,"\n %s",str);

    printf("Successfully appended!");
    fclose(f_p);
}