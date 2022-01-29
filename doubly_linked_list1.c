#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>
#include<string.h>

//void find();
void create();
void display();
void insert(int);
/*void find(int);
void sort();
void del(int);
void search_n_del(int);*/

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
	/*	case 5:
			printf("\nEnter the roll you want to search: ");
			scanf("%d",&r);
			find(r);
			break;
		
	
		case 8:
			printf("\nEnter the position of the node to be deleted: ");
			scanf("%d",&pos);
			del(pos);
			break;
		case 9:
			printf("\nEnter the roll whose node is to be deleted: \n");
			scanf("%d",&sroll);
			search_n_del(sroll);
			break;*/
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
		while(c<pos-1)
		{
			t=t->next;
			c++;
		}
		p->prev=t;
		p->next=t->next;
		t->next=p;
		if(p->next!=NULL)
		p->next->prev=p;
		
		if(p->next==NULL)
		{
		p->prev=tail;
		tail->next=p;
		tail=p;
	}
	}
}
/*void find(int r)
{   
    int flag=0;
	struct student *t=head;
	struct student *q=head;
	struct student *p;
	p=(struct student*)malloc(sizeof(struct student));
	printf("\nEnter the roll: ");
	scanf("%d",&p->roll);
	fflush(stdin);
	printf("\nEnter the name: ");
	gets(p->name);
	p->next=NULL;
	
	while(t!=NULL)
	{
	 if(t->roll==r)
	 {
	 	flag=1;
	 	printf("\nThe roll : %d is present in the list",r);
	 	break;
	 }
	 q=t;
	 t=t->next;

}	
	if(flag==0)
	printf("\nThe roll : %d is not present in the list",r);
	else
	{
	if(t==head)
	{
		p->next=head;
		head=p;
	}
	else
	{
	q->next=p;
	p->next=t;
}
}
}
void del(int pos)
{
	struct student *p,*t=head;
	int d=1,c=1;
	int max_node;
	while(t!=NULL)
	{
		t=t->next;
		d++;
	}
	max_node=d;
	if(pos==1 && head==NULL)
	printf("\nNo node present to be deleted!\n");
	else if(pos>max_node)
	printf("\n INVALID NODE \n Please enter a valid node...\n");
	else 
	{
	if(pos==1 && head!=NULL)
	{
		p=head;
		head=head->next;
	
	}
	else
	{
	while(c<pos-1)
	{
		t=t->next;
		c++;
	}
	p=t->next;
	t->next=p->next;

}
}
free(p);

}
void search_n_del(sroll)
{
	struct student *p,*t=head,*q=head;
	int flag=0,c=1,d=1;
	while(t!=NULL)
	{
		if(t->roll==sroll)
		{
		flag=1;
		break;
	}
	else
	{
		t=t->next;
		c++;
	}
		
	}
	if(flag==0)
	printf("\n Roll is not found \n");
	else 
	{
	if(t==head)
	{
		p=head;
		head=head->next;
		
	}
	else
	{
		p=t;
		while(d<c-1)
		{
			q=q->next;
			d++;
		}
		q->next=p->next;
	if(q->next==NULL)
		tail=q;
}
}
free(p);
}*/
