#include<stdio.h>
#include<conio.h>
void fun1();
void fun2();
int main()
{
  fun1();
  fun2();
  return 0;
}

void fun1()
{
	int* vp;
   	int c;
	c = 22;
   printf("Value of c: %d\n\n", c);
   
   vp = &c;
   printf("Content of pointer pc: %d\n\n", *vp); 
   
    *vp= 'a';
   printf("Value of c: %c\n\n", c); 	
}

void fun2()
{
	float c;
	float* vp;
	c= 2.5;
   	vp=&c;
   printf("Content of pointer pc: %.2f\n\n", *vp);	
}
