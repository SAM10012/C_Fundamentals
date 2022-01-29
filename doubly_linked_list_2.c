#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>
#include<string.h>


void create();
void display();
void insert(int);

struct node
{
	int data;
	struct node *prev;
	struct node *next;
};
struct node *head=NULL,*tail=NULL;

void main()
{
	int ch,po,r,pos,sroll;
	
	while(1)
	{
		printf("\nPress 1 to create\nPress 2 to display\nPress 3 to insert and 4 to exit\nPress 5 to find\nPress 6 to concatenate\nPress 7 to sort\nPress 8 to delete from a position:\nPress 9 to search for a particular node and delete: \n");
		scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:	
		create();
		break;
		case 2: 
		 display();
		 break;
		 case 3:
		 	printf("\nEnter a position: ");
		 	scanf("%d",&po);
		 	insert(po);
		 	break;
		case 4:
			printf("\n THE END! ");
			exit(0);
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
	head=tail=p;
	else
	{
		tail->next=p;
		p->prev=tail;
		tail=p;
	}
}
void display()
{
	struct node *q=head;
	printf("The contents of the doubly linked list are: ");
	while(q!=tail->next)
	{
	printf(" %d ",q->data);
	q=q->next;
}
}
void insert(int pos)
{
	struct node *p,*t=head;
	int c=1;
	p=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter the data: ");
	scanf("%d",&p->data);
	
	if(pos==1 && head==NULL)
	{
		p->next=NULL;
		
		head=tail=p;
		head->prev=tail->prev=NULL;
	}
	else if(pos==1 && head!=NULL)
	{
		p->next=head;
		p->prev=NULL;
		head->prev=p;
		head=p;
	}
	else
	{
		while(c<pos)
		{
			t=t->next;
			c++;
		}
	t->prev->next=p;
	p->prev=t->prev;
	p->next=t;
	t->prev=p;
	
		
		if(p->next==NULL)
		{
        p->prev=tail;
		tail->next=p;
		tail=p;
	}
	}
}

