#include<stdio.h>
#include<conio.h>
void main()
{
    //char name[30]="'A','K','A','S','H','\0'";
    //char name[30]="AKASH SARKAR";
    //char name[30]="AKASH";
    //char fname[30],lname[30];
    char name[30];
    printf("Enter Name:");
    //scanf("%s%s",fname,lname);
    //printf("%s %s",fname,lname);

    gets(name);
    //printf("%.4s\n",name);
    //printf("%10.5s\n",name);
    printf("%s\n",&name[2]);
    //puts(name);
    //puts(name);
}