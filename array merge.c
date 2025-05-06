#include<stdio.h>
#include<conio.h>
int main()
{
	int a[4],b[4],c[8],i;
	printf("Enter the elements in 1st Array:");
	for(i=0;i<4;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\nEnter the elements in 2nd array: ");
	for(i=0;i<4;i++)
	{
		scanf("%d",&b[i]);
	}
	
	printf("\nElements of array after merge:");
	for(i=0;i<8;i++)
	{
		c[i]=a[i];
		c[i+8]=b[i];
	}
	for(i=0;i<8;i++)
	{
		printf("%d",c[i]);
	}
	
	return 0;
}
