#include<stdio.h>
#include<conio.h>
#include<string.h>
#define N 50
void main()
{
    char str1[N],str2[N];
    int i,flag=0;
    printf("Enter STRING 1:");
    gets(str1);
    printf("Enter STRING 2:");
    gets(str2);

    if(strlen(str1)==strlen(str2))
    {
        for(i=0; str1[i]!='\0' || str2[i]!='\0'; i++)
        {
            if(str1[i]!=str2[i])
            {
                flag=1;
                break;
            }
        }

        if(flag==0)
        {
            printf("Same.");
        }
        else
        {
            printf("Not same.");
        }
    }
    else{
        printf("Not Same.");
    }

}