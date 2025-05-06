#include<stdio.h>
#include<limits.h>
int main()
{
	int i,n;
	printf("Enter the size of array:");
	scanf("%d",&n);
	
	int arr[n];
	
	for(i=0;i<n;i++)
	{
		printf("Enter the elements of array");
		scanf("%d",&arr[i]);
	}
	
	int minimum= INT_MAX;
	for(i=0;i<n;i++)
	{
		if(arr[i]<minimum)
		{
			minimum=arr[i];
		}
	}
	
	printf("The minimum value is:%d",minimum);
	
	int second_minimum=INT_MAX;
	for(i=0;i<n;i++)
	{
		if(arr[i<second_minimum && arr[i]!=minimum])
		{
			second_minimum=arr[i];
		}
	}
	
	printf("\nThe second minimum value is :%d",second_minimum);
	return 0;
}
