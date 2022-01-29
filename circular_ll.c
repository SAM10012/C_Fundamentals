#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void create();
void display();
void insert_at_beg();
void insert_at_end();

struct node
{
	int data;
	struct node *next;
};
struct node *head=NULL,*tail=NULL;

void main()
{
	int ch;
	
	while(1)
	{
	printf("\n Press 1 to create \n Press 2 to display \n Press 3 to exit \n Press 4 to insert at beginning \n Press 5 to insert at the end \n");
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
				printf("\nTHE END!");
				exit(0);
				break;
			case 4:
				insert_at_beg();
				break;
			case 5:
				insert_at_end();
				break;
		    default: 
				printf("\nInvalid choice...");
				break;
		}
	}
}

void create()
{
	int item;
	struct node *p;
	p=(struct node*)malloc(sizeof(struct node));
	printf("\n Enter the data in the new node: ");
	scanf("%d",&item);
	p->data=item;
	p->next=NULL;
	if(head==NULL)
	{
		head=tail=p;
		tail->next=head;
	}
	else
	{
		tail->next=p;
		tail=p;
		tail->next=head;
	}
}

void display()
{
	struct node *t=head;
	do
	{
		printf("%d\t",t->data);
		t=t->next;
	}while(t!=head);
}

void insert_at_beg()
{
	int val;
	struct node *q;
	q=(struct node*)malloc(sizeof(struct node));
	printf("\n Enter the new value to be inserted at the beginning: ");
	scanf("%d",&val);
	q->data=val;
	q->next=head;
	head=q;
	tail->next=head;
}

void insert_at_end()
{
	int val;
	struct node *s;
	s=(struct node*)malloc(sizeof(struct node));
	printf("\n Enter the new value to be inserted at the end: ");
	scanf("%d",&val);
	s->data=val;
	tail->next=s;
	tail=s;
	tail->next=head;
}
