#include<stdio.h>
#include<conio.h>
int Factorial(int);
int Square(int);
int Cube(int);
int i,num;
int main()
{
	int choice;
	printf("Enter the number for which you have to perform mathematical operation:",num);
	scanf("%d",&num);
	
	do
	{
		printf("\n1.Factorial\n2.Square\n3.Cube\n");
		printf("Enter your choices\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			{
			  int a=Factorial(num);
			printf("The factorial of %d is %d",num,a);
			  break;
			}
			
			case 2:
			{
			 int c=Square(num);
			 printf("The square of %d is %d",num,c);
				break;
			}
			
			case 3:
		    {
		      int e=Cube(num);
		      printf("The cube of %d is %d",num,e);
		      break;
			}
			
			default:
			{
				printf("Exit");
				
			}
		}
	}
	while(choice!=4);
	return 0;
}

int Factorial(int b)
{
	int fact;
	fact=1;
	for(i=1;i<=b;i++)
	{
		fact=fact*i;
	}
	
  return fact;
}

int Square(int d)
{ 
  int s;
  s=d*d;
  return s;
}

int Cube(int f)
{
	int g;
	g=f*f*f;
	return g;
}



