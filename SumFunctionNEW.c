#include<stdio.h>
int sum(int , int );
int main()
{
	int x ,y,a;
	printf("enter first number:");
	scanf("%d",&x);
	printf("enter 2nd number:");
	scanf("%d",&y);
	a=sum(x,y);
	printf("%d",a);


	
	
	
	
	
}
int sum(int x, int y)
{
	//int a,b,c ;
	//c = a+b;
	//printf("%d",c);
	int z=x+y;
	//printf("%d",z);
	return z;
	
}