#include<conio.h>
#include<stdio.h>

void oddeven(int);

void oddeven(int x)
{
	if(x%2==0)
	{
		printf("Even number");
	}
	else
	{
		printf("Odd number");	
	}	
}

int main()
{
	int a;
	printf("Enter the number:\n");
	scanf("%d",&a);
	oddeven(a);
	return 0;
}
