#include<conio.h>
#include<stdio.h>
void main()
{
    int n,rev,temp;
    printf("Enter a number:");
    scanf("%d",&n);
    temp=n;  
    while(n>0)
    {
        rev=(n%10)+rev*10; //0
        //sum=(sum*10)+rev; //0
        n=n/10; //2

    }
    printf("The reverse number of %d is %d",temp,rev);

    if(temp==rev)
    {
        printf("The number is Palindrome!");
    }
    else
    {
        printf("The number is not palindrome!");
    }

}