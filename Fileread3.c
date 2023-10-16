#include<stdio.h>
#include<stdlib.h>

void main()
{
    FILE *f_Ptr =NULL;
    char str[50];

    f_Ptr =fopen("Test1.txt","r");

    if(f_Ptr == NULL)
    {

        printf("Error! No file present as Test1.txt.");
        exit(1);
    }
    
    fgets(str,45,f_Ptr);
    printf("%s",str);
    fclose(f_Ptr);

}