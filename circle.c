#include<stdio.h>
#include<math.h>
#define PI 3.1459
int main()
{
	int r;
	float area,circum;
	
	printf("Enter the radius of circle");
	scanf("%d",&r);
	
	area=PI*r*r;
	circum=2*PI*r;
	printf("Area is %f & circumference is %f",area,circum);
	return 0;
}
