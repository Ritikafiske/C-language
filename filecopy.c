#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fs,*ft;
	char ch;
	fs=fopen("a.txt","r");
	
	if(fs==NULL)
	{
		puts("Cannot open a file");
		exit(0);
	}
	
	ft=fopen("b.txt","w");
	if(ft==NULL)
	{
		puts("Cannot open a file");
		exit(0);
	}
	
	while(1)
	{
		ch=getc(fs);
		
		if(ch==EOF)
		break;
		
		else
	{
		printf("%c",ch);
		putc(ch,ft);
	}
	}
	
	printf("File copied successfully");
	
	fclose(fs);
	fclose(ft);
	return 0;
}
