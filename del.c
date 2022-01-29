#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>

void create();
void display();
void search_n_del(int);

struct student
{
	int roll;
	char name[20];
	struct student *next;
};

struct student *head,*tail;

void main()
{
	int ch,po,r,pos,sroll;
	head=tail=NULL;
	while(1)
	{
		printf("\nPress 1 to create\nPress 2 to display\nPress 3 to exit\nPress 4 to search for a particular node and delete: \n");
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
			printf("\nEnter the roll whose node is to be deleted: \n");
			scanf("%d",&sroll);
			search_n_del(sroll);
			break;
		default:
			printf("\nInvalid choice");
			break;
	}
}	
}

void create()
{
	struct student *p;
	p=(struct student*)malloc(sizeof(struct student));
	printf("\nEnter the roll: ");
	scanf("%d",&p->roll);
	fflush(stdin);
	printf("\nEnter the name: ");
	gets(p->name);
	p->next=NULL;
	if(head==NULL)
	head=tail=p;
	else
	{
		tail->next=p;
		tail=p;
	}
}

void display()
{
	struct student *q=head;
	while(q!=NULL)
	{
	printf("The roll is %d\n",q->roll);
	printf("The name is :");
	puts(q->name);
	q=q->next;
}
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
}
