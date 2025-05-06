#include<stdio.h>
#include<conio.h>
int main()
{
	int i,arr[i];
	int item,index,size;
	
	printf("Enter the size of the array");
	scanf("%d",&size);
	
	printf("Enter %d elements:",size);
	
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Array before insertion: ");
	
	for(i=0;i<size;i++)
	{
		printf("%d",arr[i]);
		printf("\n");
	}
	
	printf("Enter the element to be inserted: ");
	scanf("%d",&item);
	
	printf("Enter the index at which the element is to be inserted: ");
	scanf("%d",&index);
		
	size++;
	for(i=size-1;i>=index+1;i--);
	{
		arr[i]=arr[i-1];
		
	}
	
	arr[index+1]=item;
	
	printf("Array after insertion: ");
	for(i=0;i<size;i++)
	{
		printf("%d",arr[i]);
		printf("\n");
		
	}
	
	return 0;
 
}
