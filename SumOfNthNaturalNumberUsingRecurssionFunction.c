#include<stdio.h>
#include<conio.h>

int sum (int);

int main()
{
	int a,b;
	printf("Enter the nth tarm to find sum:");
	scanf("%d",&b);
	a=sum(b);
	printf("The summation of natural number till nth term is:\n%d",a);
	return 0;
}

int sum(int x)
{
	int s=0;
	if(x==1)
		return x;
	else
		s=x+sum(x-1);
		return s;
}
