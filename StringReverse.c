#include<stdio.h>
#include<conio.h>
#include<string.h>
#define N 50
void main()
{
    char str1[N],ch;
    int i,len;
    printf("Enter the String:");
    gets(str1);
    len=strlen(str1);
    for(i=0;i<len/2;i++)
    {
        ch=str1[i];
        str1[i]=str1[len-1-i];
        str1[len-1-i]=ch;
    }
    printf("The reverse of the string is : %s",str1);

}