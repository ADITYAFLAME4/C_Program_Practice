#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int super(void);
int super()
{
    float F,C;
    char n;
    jump:
    printf("\n\n Press c to convert temperature from Fahrenheit to Celsius \n\t\t\tor\n Press f to convert temperature from Celsius to Fahrenheit:\n\n\t=>");
	scanf("%c",&n);
    if((n =='c') ||(n =='C'))
    {
        printf("\n\nEnter temperature in Fahrenheit: ");
        scanf("%f",&F);
        C= (F - 32) / 1.8;
        printf("\n\nTemperature in Celsius: %.2f\n\n",C);
        printf("\n\nPress Any Key to Exit or Press Enter to Calculate Again:");
        getchar();
        if(getchar() == '\n')
		{
            system("cls");
			goto jump;
		}
		else
		{
            system("cls");
			printf("Thanks for Using My software,Regards- AKASH~");
            getch();
            return 0;
		}
        
        }
    
    
    else if((n =='f') ||(n =='F'))
    {
        printf("\n\nEnter temperature in Celsius: ");
        scanf("%f",&C);
        F= (C*1.8)+32;
        printf("\n\nTemperature in Fahrenheit: %.2f\n\n",F);
        //getch();
        //return 0;
        printf("\n\nPress Any Key to Exit or Press Enter to Calculate Again:");
        //scanf("%c",ch);
        getchar();
        if(getchar() == '\n')
		{
            system("cls");
			goto jump;
		}
		else
		{
            system("cls");
			printf("Thanks for Using My software,Regards- AKASH~");
            getch();
            return 0;
		}
        }
    
    else
    {
        printf("\n\nEnter The Valid Input,Press any key to continue.....\n\n");
        getch();
        system("cls");
        goto jump;
    }
}
int main()
{
	super();
}

