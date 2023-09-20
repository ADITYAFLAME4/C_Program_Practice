#include <stdio.h>
void main()
{
    int i;
	printf("The First 10 Odd Natural Numbers are\n");

	for (int i = 1; i <= 10; i++)
	{
		printf("%d\n",2*i-1);
	}
}