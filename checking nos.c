#include<stdio.h>
#include<conio.h>
int main()
{
 int i,n,num,pos,neg,even;
 printf("Enter the count of numbers:");
 scanf("%d",&n);
 
 printf("Enter the numbers");
 for(i=0;i<n;i++)
 {
 scanf("%d",&num);
 }
 
 for(i=0;i<n;i++)
 {
 
    if(num>0)
   {
 	pos=0;
 	pos++;
   }
 
    else if(num<0)
  { 
	neg=0;
	neg++;
 }

  else if(num%2==0)
  {
	even=0;
	even++;
  }

else
{
	printf("no is odd");
}
}
return 0;
}
