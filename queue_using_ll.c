#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<malloc.h>

void enqueue(int);
void dequeue();
void display();

struct node
{
	int data;
	struct node *link;
};
struct node *front=NULL, *rear=NULL;



void main()
{
	int ch,item;
	while(1)
	{
		printf("\n Press 1 to enqueue \n Press 2 to dequeue \n Press 3 to display \n Press 4 to exit \n");
		printf("\n Enter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\n Enter the element to be inserted: ");
				scanf("%d",&item);
				enqueue(item);
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
			case 4:
				printf("\n THE END! ");
				exit(0);
				break;
			default:
				printf("\n INVALID CHOICE... ");
				break;
			}
				
		}
	}

void enqueue(int item)
{
	struct node *p;
	p=(struct node*)malloc(sizeof(struct node));
	if(p==NULL)
	printf("\n QUEUE OVERFLOW! ");
	else
	{
	p->data=item;
	printf("%d ",p->data);
	p->link=NULL;
	if(front==NULL)
	{
		front=p;
		rear=p;
	}
	else
	{
	rear->link=p;
	rear=p;
}
}
}

void dequeue()
{
	if(front==NULL)
	printf("\n QUEUE UNDERFLOW! \n");
	else
	{
		printf("\n The deleted element is %d\n",front->data);
		if(front->data==rear->data)
		{
			front=NULL;
			rear=NULL;
		}
		else
		front=front->link;
	}
}

void display()
{
	struct node *q=front;
	printf("\n The elements of the queue are: ");
	if(front==NULL)
	printf("\n\n There are no elements in the queue \n");
	else
	{
	while(q!=rear->link)
	{
		printf("%d\t",q->data);
		q=q->link;
	}
}
}
