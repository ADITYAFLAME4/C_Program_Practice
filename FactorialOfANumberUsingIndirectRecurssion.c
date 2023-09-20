#include<stdio.h>
#include<conio.h>

int fun1(int);
int fun2(int);

int main()
{
	int a;
	printf("Enter the number to find factorial:");
	scanf("%d",&a);
	printf("The factorial of %d is : %d",a,fun1(a)); 
	return 0;
}

int fun1(int x)
{
	if(x<=1)
		return 1;
	else
		return x*fun2(x-1);
}

int fun2(int x)
{
	if(x<=1)
		return 1;
	else
		return x*fun1(x-1);
}
