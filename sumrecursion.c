#include<stdio.h>
#include<conio.h>
int add(int);
int main()
{
	int sum,a;
	printf("Enter any 5 digit number",a);
	scanf("%d",&a);
	sum=add(a);
	printf("The sum of digits of 5 digit number is %d",sum);
	
	return 0;
}

int add(int b)
{ 
   int c;
{
	if(b==0)
   {
	return 0;
   } 
	
	else
	{
		c=(b%10)+add(b/10);
	}
}
	return c;
}

