#include<stdio.h>
#include<stdlib.h>
void main()
{
    char str[30];
    char str2[30];
    FILE *f_ptr = NULL;

    f_ptr=fopen("Test4.txt", "w+");

    if(f_ptr== NULL)
    {
        printf("Error!");
        exit(1);
    }

    printf("Enter a String you want to store in file:\n");
    gets(str);

    fputs(str,f_ptr);// Prints the string (Cursor position at the end of string.)
    rewind(f_ptr);// This function Takes the cursor at the begning after printing done.

    while(!feof(f_ptr))
    {
        fgets(str2,5,f_ptr);
        printf("%s",str2);
    }
    fclose(f_ptr);
}