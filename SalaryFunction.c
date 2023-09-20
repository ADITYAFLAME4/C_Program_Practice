#include<stdio.h>
#include<string.h>
void my_name(int);
void engineer(int);
int main()  
{  
 int n,salary; 
 printf("\nEnter your  name: ");  
 scanf("%s",&n);
 my_name(n);
 printf("\nEnter your salary: ");
 scanf("%d",&salary);
 engineer(salary);
}  
void my_name(int n)  
{  
    if(n%2 == 0)  
    {  
         printf("\n MYNAME  IS RUPAMVODAI");  
    }  
    else   
    {  
         printf("\n MY NAME IS SAYAN "); 
    }  
}
void engineer(int salary)
{
	if(salary>50000 && salary<60000)
	{
		printf("I am in IBM");
	}
	else if(salary>60000 && salary<75000)
	{
		printf("I am in microsoft");
	}
	else
	{
		printf("I am in buten's honululu company");
	}
}