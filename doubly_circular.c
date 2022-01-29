#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>
#include<string.h>

struct node
{
	int data;
	struct node *prev;
	struct node *next;
};
struct node *head=NULL,*tail=NULL;

void create();
void display(int);
void delete1(int);
void range(int,int);

void main()
{
	int ch,nn,k,r1,r2;
	
	while(1)
	{
		printf("\n Press 1 to create \n Press 2 to display \n Press 4 to exit \n Press 5 to delete a particular node \n Press 6 to delete a particular range of data \n");
		scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:	
			create();
			break;
		case 2: 
			printf("\n Enter from which node number display is to be started: ");
			scanf("%d",&nn);
		 	display(nn);
		 	break;
		case 4:
			printf("\n THE END! ");
			exit(0);
			break;
		case 5:
			printf("\n Enter the value to be deleted: ");
			scanf("%d",&k);
			delete1(k);
			break;
		case 6:
			printf("\n Enter the lower limit: ");
			scanf("%d",&r1);
			printf("\n Enter the upper limit: ");
			scanf("%d",&r2);
			range(r1,r2);
			break;
		default:
			printf("\nInvalid choice");
			break;
	}
}	
}
void create()
{
	struct node *p;
	p=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter the data: ");
	scanf("%d",&p->data);
	p->prev=NULL;
	p->next=NULL;
	if(head==NULL)
	{
	head=tail=p;
	tail->next=head;
	head->prev=tail;
}
	else
	{
		tail->next=p;
		p->prev=tail;
		tail=p;
		tail->next=head;
		head->prev=tail;
	}
}

void display(int nn)
{
	struct node *q=head;
	struct node *start;
	int count=1;
	if(count==nn)
	{
		start=q;
		printf("\n The elements of the doubly circular linked list are: ");
	
	do
	{
		printf(" %d ",start->data);
		start=start->next;
	}while(start!=q);
	}
	else
	{
	
	do
	{
		q=q->next;
		count++;
	}while(count!=nn);
	start=q;
	
	printf("\n The elements of the doubly circular linked list are: ");
	
	do
	{
		printf(" %d ",start->data);
		start=start->next;
	}while(start!=q);
	
}
}

void delete1(int k)
{
	struct node *q=head;
	int flag=0;
	while(1)
	{
		if(q->data==k)
		{
			flag=1;
			break;
		}
		else
		{
			q=q->next;
		}
	}
	if(flag==1)
	{
	
	q->prev->next=q->next;
	q->next->prev=q->prev;
	if(q==head)
	{
		head=q->next;
	}
	else if(q==tail)
	{
		tail=q->prev;
	}
	free(q);
	}
	else
	{
	printf("\n The value is not present in the list \n");
	}
	
}
void range(r1,r2)
{
	struct node *d=head;
	struct node *q;
	do
	{
		if(d->data>=r1 && d->data<=r2)
		{
			q=d;
			q->prev->next=q->next;
			q->next->prev=q->prev;
			if(q==head)
			{
			head=q->next;
			}
			else if(q==tail)
			{
			tail=q->prev;
			}
			free(q);
		}
		d=d->next;
	}while(d!=head);
}
