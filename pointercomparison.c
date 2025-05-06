#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,*m,*n;
	printf("Enter any two numbers which you want to compare",a,b);
	scanf("%d%d",&a,&b);
	m=&a;
	n=&b;
	if(*m>*n)
	{
		printf("The maximum number is %d",*m);
	}
	else
	{
		printf("The maximum number is %d",*n);
	}
	return 0;
}
