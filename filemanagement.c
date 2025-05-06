#include<stdio.h>
int main()
{
	FILE *p;
	char ch;
	int nol=0,nots=0,nob=0,noc=0;
	p=fopen("PRC.c","r");
	
	while(1)
	{
		ch=fgetc(p);
		if(ch==EOF)
		break;
		noc++;
		
		if(ch==' ')
		nob++;
		
		if(ch=='\t')
		nots++;
		
		if(ch=='\n')
		nol++;
	}
	
	printf("The number of chracters are %d\n",noc);
	printf("The number of blank spaces are %d\n",nob);
	printf("The number of tabs are %d\n",nots);
	printf("The number of lines are %d\n",nol);
	
	return 0;
	
}
