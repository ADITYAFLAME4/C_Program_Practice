#include<stdio.h>
void modify(char[],char[]);

void main()
{
    char str1[]="Akash";
    char str2[]="sarkar";

    modify(str1,str2);
}

void modify(char str3[],char str4[])
{
    int i, length=0;

    for(i=0 ; str3[i] != '\0' ; i++)
    {
        length=length+1;
    }

    printf("\nLength of first string is :%d",length);


    str4[0]='S';

    printf("\n%s %s",str3,str4);
}