#include <conio.h>
#include <stdio.h>

int sum(int, int);

int sum(int a, int b)
{
	int c;
	c = a + b;
	return c;
}

int main()
{
	int x, y, s;
	printf("Enter 2 numbers to add:\n");
	scanf("%d%d", &x, &y);
	s = sum(x,y);
	printf("The addition is: %d", s);
	return 0;
}
