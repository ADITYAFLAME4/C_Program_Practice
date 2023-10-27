#include<stdio.h>
#include<stdlib.h>

void main()
{
    FILE *f_p1, *f_p2;
    char ch;

    // Opening the file from ehich we want to copy content.
    f_p1 = fopen("Test1.txt", "r");
    if(f_p1 == NULL)
    {
        printf("Error Opening the file. File might not be found or to be created !");
        exit(1);
    }

    // Opening the file in which the content will be copied.
    f_p2 = fopen("Test1_Copy.txt", "w");
    if(f_p2 == NULL)
    {
        printf("Error Opening the file. File might not be found or to be created !");
        exit(1);
    }
    // Coping Character by character, we can also copy by string.
    while((ch= fgetc(f_p1)) != EOF )
    {
        fputc(ch,f_p2);
    }

    fclose(f_p1);
    fclose(f_p2);

    printf("File Copied Successfully!");

}