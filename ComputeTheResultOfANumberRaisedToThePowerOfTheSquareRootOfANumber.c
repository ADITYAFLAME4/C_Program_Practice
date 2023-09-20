#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    double b,c;
    printf("Enter the number:");
    scanf("%d",&a);
    b=sqrt(a);
    printf("\nThe square root of %d is:%.2lf",a,b);
    c=pow(a,b);
    printf("\nThe number %d raised to the power of its square root %.2lf is :%.2lf",a,b,c);
    return 0;

}