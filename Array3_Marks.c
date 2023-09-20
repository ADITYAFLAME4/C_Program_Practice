#include<stdio.h>
#include<conio.h>
void main()
{
    int i,sum=0,marks[5];
    float avg;
    printf("Enter the marks of 5 subjects:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&marks[i]);

        sum=sum+marks[i];
    }
    avg=sum/5;

    printf("The sum of 5 subject marks is %d \nand the avarage is %f ",sum,avg);
}