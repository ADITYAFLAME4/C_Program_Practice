#include<stdio.h>
float avg(float[],int);

void main()
{
    float average;
    float marks[]={10.8,15.2,20.6,30.9,45.0};
    average= avg(marks,5);
    printf("The Average of marks is: %f",average);
}

float avg(float a[], int b)
{
    int i;
    float sum=0, average=0;

    for(i=0;i<b;i++)
    {
        sum = sum + a[i];
    }
    average = sum/b;
    return average; 
}