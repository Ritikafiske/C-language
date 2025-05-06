#include<stdio.h>
#include<conio.h>
int size;
int front=-1,rear=-1;
int Q[50];
int C;
void Enqueue();
void Dequeue();
void Peek();
void Display();
int main()
{
	printf("Enter the size of your queue",size);
	scanf("%d",&size);
	printf("\n1.Enqueue\n2.Dequeue\n3.Peek\n4.Display\n");
	printf("-------------------------------------------------\n");
	
	do
	{
		
	  printf("Enter your choice\n",C);
	  scanf("%d",&C);
	  
	switch(C)
	{
		case 1:
		
		    Enqueue();
			break;
		
		
		case 2:
		
			Dequeue();
			break;
		
		
		case 3:
		
			Peek();
			break;
		
		
		case 4:
		
			Display();
			break;
		
		
	
		default:
		 
		   printf("Invalid Choice\n");
	     
	}
	}
	
   while(C!=5);
   return 0;	
}

void Enqueue()
{
	if(rear==(size-1))
	{
		printf("Queue Overflowed\n");
	}
	
	else if(rear==-1&&front==-1)
	{
		front=0;
		rear=0;
		int value;
		printf("Enter the value to be added in the queue\n",value);
		scanf("%d",&value);
		Q[front]=value;
		Q[rear]=value;
		printf("The value present at the Q[rear] is %d\n",Q[rear]);
	}
	
	else
	{
		int V;
		printf("Enter the value to be added in the queue\n",V);
		scanf("%d",&V);
		rear=rear+1;
		Q[rear]=V;
		printf("The value present at Q[rear] is %d\n",Q[rear]);
	}
}

void Dequeue()
{
	if(front==-1||front>rear)
	{
		printf("Queue Underflowed\n");
	}
	
	else
	{
		printf("The deleted value from the queue is %d\n",Q[front]);
		front=front+1;
	}
}

void Peek()
{
	printf("The front of the queue is %d\n",Q[front]);
	printf("The rear of the queue is %d\n",Q[rear]);
}

void Display()
{
	int i;
	printf("The final Queue is\n");
	for(i=front;i<=rear;i++)
	{
		printf("%d\n",Q[i]);
	}
}






















