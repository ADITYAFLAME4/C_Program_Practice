#include<stdio.h>
#include<conio.h>
#include<string.h>
#define N 50
void main()
{
    char str1[N],str2[N];
    printf("Enter STRING 1:");
    gets(str1);
    printf("Enter STRING 2:");
    gets(str2);
    if(strcmp(str1,str2)==0)
    {
        printf("Same.");
    }
    else
    {
        printf("Not same.");
    }
}