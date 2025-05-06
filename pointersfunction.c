#include<stdio.h>
#include<conio.h>
int sum(int*,int*);
int main()
{
	int S,a,b;
	printf("Enter any two numbers which you want to add\n",a,b);
	scanf("%d%d",&a,&b);
	S=sum(&a,&b);
	printf("The sum of %d and %d is %d\n",a,b,S);
	return 0;
}

int sum(int *n1, int *n2)
{
	int add;
	add=*n1+*n2;
	return(add);
}
