#include<stdio.h>
#include<conio.h>
int main()
{
  int a[3][3],i,j;
  printf("Enter elements of 2D array");
  for(i=0;i<3;i++)
  {
  	for(j=0;j<3;j++)
  	{
  	  printf("\nEnter a[%d][%d]: ",i,j);
	  scanf("%d",&a[i][j]);	
	}
  }
  
  printf("\nOriginal Array");

  for(i=0;i<3;i++)
  {
  	printf("\n");
  	for(j=0;j<3;j++)
  	{
  		printf("%d\t",a[i][j]);
	  }
  }
  
  printf("\nTransposed array");
  for(i=0;i<3;i++)
  {
  	printf("\n");
  	for(j=0;j<3;j++)
	  {
	  	printf("%d\t",a[j][i]);
		} 
		 }
		 
		 return 0;
}
