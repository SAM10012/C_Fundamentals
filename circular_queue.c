#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 5
 
void cqenqueue(int [],int);
void cqdequeue(int []);
void display(int []);

int front=0;
int rear=0;

void main()
{
	int a[MAX],ch,item;
	while(1)
	{
		printf("\n Press 1 to enqueue \n Press 2 to dequeue \n Press 3 to display \n Press 4 to exit \n");
		printf("\n Enter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
		case 1: 
			printf("\n Enter the item to be inserted in the circular queue: ");
			scanf("%d",&item);
			cqenqueue(a,item);
			break;
		case 2:
			cqdequeue(a);
			break;
		case 3: 
			display(a);
			break;
		case 4: 
			printf("\n THE END! \n");
			exit(0);
			break;
		}
	}
}

void cqenqueue(int a[],int item)
{
	int next;
	if(front==0)
	{
		front=1;
		rear=1;
		a[rear]=item;
	}
	else
	{
		next=(rear%MAX)+1;
		if(next!=front)
		{
			rear=next;
			a[rear]=item;
		}
		else
		{
			printf("\n Circular Queue Overflow! \n");
		}
	}
}

void cqdequeue(int a[])
{
	
	if(front==0)
	{
		printf("\n Circular Queue underflow! \n");
	}
	else
	{
	
	printf("\n The deleted item is %d \n",a[front]);
	if(front==rear)
	{
		front=0;
		rear=0;
	}
	else
	{
		front=(front%MAX)+1;
	}

	}
}

void display(int a[])
{
	int i;
	printf("\n The elements of the circular queue are: ");
	if(front==0)
	printf("\n There are no elements in the Circular Queue...");
	else
	{
	for(i=front;i<=rear;i++)
	{
		printf("%d\t",a[i]);
	}
}
}
