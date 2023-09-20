#include<stdio.h>
/*Declaration*/
int mul (int , int );

/*.......MUL FUNCTION STARTS.......*/
	int mul(int x,int y)
	{
		int p;
	
		p=x*y;
		return(p);
	}

int main()
{
	int a,b,c;
	a=5;
	b=10;
	c=mul (a,b);
	
	printf("Multiplication of %d and %d is %d",a,b,c);
	return 0;
	
}
        /*.......Main Ends.......*/
    
	
