#include <stdio.h>

void main()
{
    int i,j,k;
    
   for(i=1,j=0,k=3; i<=5,j<=6,k>1 ;i++,j++,k-- );
   {
       printf("%d %d %d\n",i,j,k);
   }
   //printf("%d %d\n",i,j);
}