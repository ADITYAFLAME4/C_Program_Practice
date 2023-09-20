#include<Stdio.h>
int main()
{
	void* vp;
	int a=5;
	float b=1.5;
	char c='a';
	
	vp=&a;
	printf("a=%d\n",*(int*)vp);
	vp=&b;
	printf("b=%.2f\n",*(float*)vp);
	vp=&c;
	printf("c=%c\n",*(char*)vp);
	return 0;
}
