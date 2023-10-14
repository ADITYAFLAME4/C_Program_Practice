#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main()
{
    FILE *file_Pointer =NULL;
    char str1[50];
    char stR2[100];
    char ch;
    int i,number;

    file_Pointer =fopen("Test1.txt","w");

    if(file_Pointer == NULL)
    {

        printf("Error! No file present as Test1.txt.");
        exit(1);
    }

    printf("Enter Your Name:\n");
    gets(str1);

    for(i=0;i!=strlen(str1);i++)
        fputc(str1[i],file_Pointer);

        fprintf(file_Pointer,"\n");
    
    printf("Enter your favourite line or quote:");
    gets(stR2);
    fputs(stR2,file_Pointer);

    fprintf(file_Pointer,"\n");
    
    printf("Enter your favourite alphabet:");
    scanf("%c",&ch);

    fprintf(file_Pointer,"Your Favourite Alphabet is:");
    fputc(ch,file_Pointer);
    
    fprintf(file_Pointer,"\n");

    printf("Enter your favourite Number:\n");
    scanf("%d",&number);
    fprintf(file_Pointer,"Your favourite Number is: %d",number);

    fprintf(file_Pointer,"\n");

    fclose(file_Pointer);

}