#include<stdio.h>
#include<conio.h>
#include<string.h>
#define N 50
void main()
{
    char str1[N],ch;
    printf("Enter the String:");
    gets(str1);
    strrev(str1); 
    printf("The reverse of the string is : %s",str1);

}