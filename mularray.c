#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i=0,j=0;
	int a,b,c,d;
	int Arr1[10][10],Arr2[10][10],Arr3[10][10];
	printf("Enter the number of rows and columns for Arr1\n",a,b);
	scanf("%d%d",&a,&b);
	
	printf("Enter the number of rows and columns for Arr2\n",c,d);
	scanf("%d%d",&c,&d);
	
	if(b==c)
	{
		printf("The array multiplication can be done.\n");
	}
	
	else
	{
		printf("Array multiplication is not possible.\n");
		return 0;
	}
	
	printf("The Arr1 is\n");
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			printf("Arr1[%d][%d]:",i,j);
			scanf("%d",&Arr1[i][j]);
		}
	}
	
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			printf("%d\t",Arr1[i][j]);
		}
		printf("\n");
	}
	
	printf("The Arr2 is\n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<d;j++)
		{
			printf("Arr2[%d][%d]:",i,j);
			scanf("%d",&Arr2[i][j]);
		}
	}
	
	for(i=0;i<c;i++)
	{
		for(j=0;j<d;j++)
		{
			printf("%d\t",Arr2[i][j]);
		}
		printf("\n");
	}
	
 
    int k;
 
    for(i=0;i<a;i++)
    {
 	for(j=0;j<d;j++)
  	{
  		Arr3[i][j]=0;
 		for(k=0;k<b;k++)
 		{
 			Arr3[i][j]+=Arr1[i][k]*Arr2[k][j];
		 }
	 }
    }
 
 printf("The multiplied matrix :\n");
 for(i=0;i<a;i++)
 {
 	for(j=0;j<d;j++)
 	{
 		printf("%d\t",Arr3[i][j]);
	 }
	 printf("\n");
  } 
 

return 0;
}
