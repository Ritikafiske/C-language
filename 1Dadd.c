#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[5]={1,2,3,4,5};
	int sum=0;
	int length,i;
	
	for( i=0;i<5;i++)
	{
	int sum=sum+arr[i];
	printf("\nSum of all elements of an array:%d",sum);
	}
    
	return 0;
	
}
