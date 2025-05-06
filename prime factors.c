#include<stdio.h>
#include<conio.h>
int prime(int,int);
int main()
{
	int a,prime_factors;
	printf("Enter any number whose prime factors need to be found",a);
	scanf("%d",&a);
	
	printf("The prime factors are:\n");
	prime_factors=prime(a,2);
	
	return 0;
}

int prime(int b,int i)

{   
		if(i<=b)
	{
			
		if(b%i==0)
		{
			printf("%d\n",i);
			b=b/i;
		}     
		
		else
		
		 i++;
		 prime(b,i);	
		
    }
return 0;
}
