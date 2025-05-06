#include<stdio.h>
#include<conio.h>
#define N 10
int main()
{
 int a[N],arr1[N],arr2[N],i,pos,k1=0,k2=0;
 printf("Enter %d integer no \n ",N);
 for(i=0;i<N;i++)
{
	scanf("%d",&a[i]);
}
printf("Enter position to split the array into two\n");
scanf("%d",&pos);
for(i=0;i<N;i++)
{
	if(i<pos)
	arr1[k1++]=a[i];
	else 
	arr2[k2++]=a[i];
	}
	
	printf("\nElements of first array:arr1[%d]\n",k1);
	for(i=0;i<k1;i++)
	printf("%d\n",a[i]);
	
	printf("\nElements of second array:arr2[%d]\n",k2);
	for(i=0;i<k2;i++)
	printf("%d\n",a[i]);
	
	printf("\n");
	
	return 0;
}
