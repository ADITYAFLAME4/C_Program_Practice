#include<stdio.h>
#include<stdlib.h>

void main()
{
    FILE *fp= NULL;
    char str[50];

    fp=fopen("NewTest.txt", "r");

    if(fp==NULL)
    {
        printf("Error!");
        exit(1);
    }

    printf("%d",ftell(fp)); // Should Print 0 as starting of file

    fscanf(fp,"%s",str);
    printf("\n%s",str);     //Should print the string My according to the file.


    fseek(fp,0,SEEK_END);   // Offset 0 to end of file = Length of file.
    printf("\n %d",ftell(fp));

    fclose(fp);
}