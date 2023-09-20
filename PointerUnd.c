#include<stdio.h>
#include<conio.h>
void main()
{
    int a[]={99,10,11,-1,56,67,5,4}; //q pointing 11 (3rd ) p pointing 10(2nd)
    int *p,*q;
    p=&a[1];
    q=&a[0]+3;
    printf("\n%d",*q);//-1
    p--;  //p pointing 99 (1st)
    printf("\n%d",*p);//99
    printf("\n%d %d %d",(*p)++,(*p)++,*(++p));// 11   10   10  p pointing 10 (2nd)
    printf("\n%d",*p); //12
    printf("\n%d",(*p)++); //12
    printf("\n%d",(*p)++);//13
    printf("\nvalue of P %d",*p);//14  (2nd)
    printf("\n1 value of Q %d",*q);
    q--; // q position (2nd)
    printf("\n2 value of Q %d",*q);//11
    printf("\n%d",(*(q-2)));//99
    printf("\n%d",*q); //No idea what is happening?
    printf("\n%d",(*(p+2))-2); //-3
    printf("\n%d",(*(p++ -2))-1); //No idea what is happening?
}