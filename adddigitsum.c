#include<stdio.h>
#include<conio.h>
int rec(int);
int main()
{
	int a,sum;
	printf("Enter any 4 digit number",a);
	scanf("%d",&a);
	sum=rec(a);
	printf("The sum of digit of a number is %d",sum);
	return 0;
}

int rec(int b)
{
	int c;
	{
		if(b==0)
		{
			return 0;
		}
		
		else
		{
			c=(b%10)+rec(b/10);
			return (c);
		}
	}
}
