#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void create();
void display();
void josephus();

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
	printf("\n Press 1 to create \n Press 2 to display \n Press 3 to exit \n Press 4 to enter Josephus \n");
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
				josephus();
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

void josephus()
{
	int i,j=1,pos=1,n=0,k;
	struct node *h=head,*z=head,*y=head;
	do
	{
		n=n+1;
		h=h->next;
	}while(h!=head);
	
	printf("\n The number of nodes present is %d",n);
	
	printf("\n\n Enter the number to be counted on the circular linked list: ");
	scanf("%d",&k);
	
	while(n!=1)
	{
		for(i=1;i<k;i++)
		{
			z=z->next;
			pos=pos+1;
		}
		
		while(j < (pos-1))
		{
			y=y->next;
			j=j+1;
		}
		
		y->next=z->next;
		printf("\n The deleted element is %d",z->data);
		z=y->next;
		y=z;
		pos=1;
		j=1;
		n=n-1;
	}
	printf("\n\n The remaining element in the circular linked list is %d",z->data);
	exit(0);
}
