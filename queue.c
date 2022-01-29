#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 5

void enqueue(int [],int);
void dequeue(int []);
void display(int []);

int rear=-1;
int front=-1;

void main()
{
	int ch,item,a[MAX];
	while(1)
	{
		printf("\n Press 1 to enqueue \n Press 2 to dequeue \n Press 3 to display \n Press 4 to exit \n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\nEnter the item to be inserted: ");
				scanf("%d",&item);
				enqueue(a,item);
				break;
			case 2:
				dequeue(a);
				break;
			case 3:
				display(a);
				break;
			case 4:
				printf("\nTHE END!");
				exit(0);
				break;
			default:
				printf("\nInvalid Choice...");
				break;
		}
	}
}

void enqueue(int a[],int item)
{
	if(rear==MAX-1)
	printf("\n Queue Overflow! \n");
	else
	{
		if(front==-1)
		{
			front=front+1;
		}
			a[++rear]=item;
	
	}
}

void dequeue(int a[])
{
	if(front==-1)
	printf("\n Queue Underflow! \n");
	else
	{
		printf("\n The deleted item is %d",a[front]);
		if(front==rear)
		{
			front=-1;
			rear=-1;
		}
		else
		{
			front=front+1;
		}
	}
}

void display(int a[])
{
	int i;
	printf("\n The elements of the queue are:  ");
	for(i=front;i<=rear;i++)
	{
		printf("%d\t",a[i]);
	}
}
