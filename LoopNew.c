#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,m,j;
	printf("Enter n terms & m keys: \n");
	scanf("%d %d",&n,&m);
	while(i<n && j<m)
	{
		if(n<4 && m<4)
        {	
	        for(i=0,j=0; i<n && j<m; i++,j++)
	        {
		        printf("welcome to my pc\n");
	        }
	            i++;
	            j++;
	            break;
        }
        else
        {
    	    for(i=0,j=0; i<n && j<m; i++,j++)
            {
    	        printf("go to hell\n");
            }
    	        i++;
    	        j++;
    	        break;
	    }
    }
    return 0;
}