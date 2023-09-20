#include<stdio.h>
#include<stdio.h>
#define N 50
void main()
{
    char str1[N];
    int i;
    printf("Enter the String:");
    gets(str1);

    //strlwr(str1);

    for(i=0;str1[i]!='\0';i++)
    {
        if(str1[i]>= 'A' && str1[i]<= 'Z')
        {
            str1[i]=str1[i]+32; // A+32 = a (ASCII VALUE)
        }
    }

    printf("The string is : %s",str1);
}