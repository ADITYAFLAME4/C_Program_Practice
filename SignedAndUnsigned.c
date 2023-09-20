#include<stdio.h>
#include<conio.h>
int main()
{
	//2147483647 is the highest range of integer in DEV c++ as int takes 4 bytes here.
	int a=2147483649;
	printf("\n%d",a);
	printf("\n%u",a);
	return 0;
}
