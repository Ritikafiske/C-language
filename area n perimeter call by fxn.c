#include<stdio.h>
#include<conio.h>
int perimeter(int s);
int area(int s);
int main()
{
	int t,peri,s,A;
	printf("Enter the  side of square");
	scanf("%d",&t);
	
	peri=perimeter(t);
	printf("perimeter is %d",peri);
	
	A=area(t);
	printf("\nArea is %d",A);
	
	
	return 0;
}
int perimeter(int s)
{
	int d;
	 d=4*s;
	return(d);
}

int area(int s)
{
	int q;
	q=s*s;
	return(q); 
}


