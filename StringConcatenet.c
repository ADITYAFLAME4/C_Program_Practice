#include<stdio.h>
#include<conio.h>
#include<string.h>
#define N 50
void main()
{
    char name[N];
    char title[N];
    int len1=0,len2=0,i;
    printf("Enter Your Name:");
    gets(name);
    printf("Enter Your Title:");
    gets(title);

    //strcat(name,title);
    //printf("Welcome, %s",name);

    len1=strlen(name);
    len2=strlen(title);

    for(i=0;i<=len2;i++)
    {
        name[len1+i]=title[i];
    }
    printf("Welcome, %s",name);
}