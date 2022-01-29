#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>

void create();
void display();
void ins_at_beg(int);
void del_at_end();

struct node
{
	int data;
	struct node *next;
};
struct node *head,*tail;

void main()
{
	int ch,item;
	head=tail=NULL;
	while(1)
	{
	printf("\n Press 1 to create \n Press 2 to display \n Press 3 to exit \n Press 4 to insert at beginning \n Press 5 to delete the end element \n");
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
				printf("\nEnter the value to be inserted at the beginning: ");
				scanf("%d",&item);
				ins_at_beg(item);
				break;
			case 5:
				del_at_end();
				break;
		    default: 
				printf("\nInvalid choice...");
				break;
		}
	}
}
void create()
{
	struct node *p,*j=head;
	p=(struct node*)malloc(sizeof(struct node));
	if(p==NULL)
	printf("\nMemory allocation unsuccessful due to insufficient memory!");
	else
	{
	printf("\nEnter data: ");
	scanf("%d",&p->data);
	
}
if(head==NULL)
{
	p->next=j;
	head=tail=p;
}
else
{
	tail->next=j;
	tail=p;
}

}
void display()
{
	struct node *q=head,*test=head;
	
	do
	{
		printf("%d\t",q->data);
		q=q->next;
	}while(q!=test);
}
void ins_at_beg(int item)
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=item;
	temp->next=head;
	head=temp;
}
void del_at_end()
{
	
}
