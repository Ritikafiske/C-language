#include<stdio.h>
int main()
{
int data,i,b,A[b],p=0;
printf("Enter the number of elements you want to enter in array");
scanf("%d",&b);
printf("Enter the elements of an array in sorted way");
for(i=0;i<b;i++)
{
  scanf("%d",&A[b]);
}
for(i=0;i<b;i++)
{
 printf("%d",A[b]);
}
	
int l,r,mid;
l=0,r=b-1;
printf("Enter the number you wanna search");
scanf("%d",&data);
	
while(l<=r){
	mid=(l+r)/2;
    if(data==A[mid])
	{
	  printf("The no is found at index %d",mid);
	  p==mid;
	  p=-1;
	  break;
	}
		
	else if(data<A[mid])
	{
	 r=mid-1;
	}
		
	else
	{
	  l=mid+1;
	}

}
	
if(p==0)
{
  printf("Number is not found");
}
	
return 0;
}
