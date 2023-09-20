#include<stdio.h>  
void main ()  
{  
    int i,n,largest,second,temp;  
    printf("Enter the size of the array: ");  
    scanf("%d",&n);
    int a[n];  
    printf("Enter the elements of the array: ");  
    for(i=0;i<n;i++)  
    {  
        scanf("%d",&a[i]);  
    }    
    for(i=0;i<n;i++)  
    { 
    largest = a[0];  
    second = a[1];
   // if(largest<second)
    //{
        //temp=largest;
        //largest=second;
        //second=temp;
    //}
	for(i=0;i<n;i++)
    {
	    if(a[i]>largest)
        {
          //  second=largest;
            largest=a[i];
	    }
	    else if(a[i]>second && a[i]!=largest)
        {
            second=a[i];
        }
	}       
}
    printf("largest = %d, second largest = %d",largest,second);
}