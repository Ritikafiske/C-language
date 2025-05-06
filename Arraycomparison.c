#include<stdio.h>
#include<conio.h>
int main()
{
	int i=0,j=0;
	int Arr1[2][2],Arr2[2][2];
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Arr1[%d][%d]",i,j);
			scanf("%d",&Arr1[i][j]);
		}
	}
	
	printf("\nArr1[2][2] is :\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",Arr1[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Arr2[%d][%d]",i,j);
			scanf("%d",&Arr2[i][j]);
		}
	}
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",Arr2[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			if(Arr1[i][j]==Arr2[i][j])
			{
				printf("\nArray elements of Arr1[%d][%d] and Arr2[%d][%d] is same\n",i,j,i,j);
			}
			
			else
			{
				printf("\nElements are same of Arr1[%d][%d] and Arr2[%d][%d] are not same\n",i,j,i,j);
			}
		}
	}
	
	return 0;
}
