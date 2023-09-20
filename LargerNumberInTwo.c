//Without Arguments and return type
//with Arguments no returntype
//with returntype no arguments
//With Arguments and returntype.
#include<conio.h>
#include<stdio.h>

int big(int,int);

int big(int a,int b)
{
	if(a>b)
	{
		printf("%d is the larger number",a);
	}
	else
	{
		printf("%d is the larger number",b);
	}
}

int main()
{
	int x,y;
	printf("Enter two numbers:\n");
	scanf("%d%d",&x,&y);
	big(x,y);
	return 0;
}
