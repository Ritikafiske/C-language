#include<stdio.h>
#include<conio.h>
int main()
{
int i=8,arr[8];

 int c1=0;
 int c2=0;
 
printf("Enter the nine elements of array");

  for(i=0;i<9;i++)
  {
  	scanf("%d",&arr[i]);
	    }
	    
	int c,d;    
   printf("The even numbers of array are\n");
    for(i=0;i<9;i++)
    {
    	if(arr[i]%2==0)
    	
    	{
    		c1=c1+1;
    	 printf("The count of even number is %d",c1);
		}
		
      
      else
      {
      	c2=c2+1;
      	printf("The count of odd numbers is %d",c2);
	  }
	}
	
	return 0;
}
