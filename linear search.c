#include<stdio.h>
#include<conio.h>
int main()
{
 int i,arr[i];
 int num,item;
 printf("\n Enter the number of elements in the array;\n");
 scanf("%d",&num);
 
 printf("\n Enter %d elements in a array;\n",num);
 
 for(i=0;i<num;i++)
 {
 	printf("arr[%d]= ",i);
 	scanf("%d",&arr[i]);

 }
 
 
 int flag;
 printf("Enter the value to be search\n");
 scanf("%d",&item);
 
 for(i=0;i<num;i++)
 {
 	if (arr[i]==item)
 	{
 		printf("element is present at index %d",i);
 		flag=1;
 		break;
	 }
	 else
	 {
	 	flag=0;
	 }
 	
 }
 
    if(flag==0)
    {
 	printf("element is not present");
 	}
 return 0;
}
