#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int a,b,n;
	printf("Enter the Number:\n");
	scanf("%d",&a);
	printf("Enter the Power:\n");
	scanf("%d",&b);
	
	n= pow(a,b);
	
	printf("***************************************\n\n%d to the power of %d is = %d",a,b,n);
	getch();
	return 0;
	
}
