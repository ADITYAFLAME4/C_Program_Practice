//Function with no Argument and no Return type.
#include<stdio.h>
#include<conio.h>
//Function Declearation with.
void sum(void);
void sub(void);
void mul(void);
void div(void);
void avg(void);
//Called Function 1 with no return type& Parameters.
void sum()
{
	int a,b,c;
	a=10;
	b=5;
	c=a+b;
	printf("\nThe Sum is=%d",c);
}
//Called Function 2 with no return type & Parameters.
void sub()
{
	int a,b,c;
	a=10;
	b=5;
	c=a-b;
	printf("\nThe Sub is=%d",c);
}
//Called Function 3 with no return type & Parameters.
void mul()
{
	int a,b,c;
	a=10;
	b=5;
	c=a*b;
	printf("\nThe mul is=%d",c);
}
//Called Function 4 with no return type & Parameters.
void div()
{
	int a,b,c;
	a=10;
	b=5;
	c=a/b;
	printf("\nThe div is=%d",c);
}
//Called Function 5 with no return type & Parameters.
void avg()
{
	int a,b,c;
	a=10;
	b=5;
	c=(a+b)/2;
	printf("\nThe avg is=%d",c);
}
//Main or calling function.
int main()
{
	//No arguments.
	sum();
	sub();
	mul();
	div();
	avg();
	return 0;
}
