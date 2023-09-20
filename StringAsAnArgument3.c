#include<stdio.h>
void modify(char*,char*);

void main()
{
    char str1[]="Akash";
    char str2[]="sarkar";

    modify(str1,str2);
}

void modify(char* str3, char* str4)
{
    int i, l=0;

    for(i = 0 ; str3[i] != '\0' ; i++)
    {
        l=l+1;
    }

    str4[0]='S';

     printf("\nLength of first string is :%d",l);

     printf("\n%s %s",str3,str4);
}