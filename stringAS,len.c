#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20],str2[20];
	char i;
	int a,b;
	printf("Enter the elements in string 1\n");
	scanf("%s",str1);
	printf("Enter the elements in string 2\n");
	scanf("%s",str2);
	a=strlen(str1);
	b=strlen(str2);
	printf("string1 is %s and its length is %d\n",str1,a);
	printf("string 2 is %s and its length is %d\n",str2,b);
	
	for( i=0;i<a;i++)
	{
	printf("The ASCII value of str1 is %d\n",str1[i]);
    }
    
    for(i=0;i<b;i++)
	{
	
	printf("The ASCII value of str2 is %d\n",str2[i]);
    }
	return 0;
	
}
