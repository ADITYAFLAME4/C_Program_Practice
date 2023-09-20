//Function with no Argument and no Return type.
#include<stdio.h>
#include<conio.h>
//Function Declearation with.
int sum(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);
int avg(int,int);
//Called Function 1 with no return type& Parameters.
int sum(int x,int y)
{
	int c;
	c=x+y;
	printf("\nThe Sum is=%d",c);
    return c;
}
//Called Function 2 with no return type & Parameters.
int sub(int x,int y)
{
	int c;
	c=x-y;
	printf("\nThe Sub is=%d",c);
}
//Called Function 3 with no return type & Parameters.
int mul(int x,int y)
{
	int c;
	c=x*y;
	printf("\nThe mul is=%d",c);
}
//Called Function 4 with no return type & Parameters.
int div(int x,int y)
{
	int c;
	c=x/y;
	printf("\nThe div is=%d",c);
}
//Called Function 5 with no return type & Parameters.
int avg(int x,int y)
{
	int c;
	c=(x+y)/2;
	printf("\nThe avg is=%d",c);
}
//Main or calling function.
int main()
{
	//No arguments.
	int a,b;
	printf("Enter two numbers:");
	scanf("%d %d",&a,&b);
	sum(a,b);
	sub(a,b);
	mul(a,b);
	div(a,b);
	avg(a,b);
	return 0;
}
