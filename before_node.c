/*PROGRAM NO.1*/

#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>
#include<string.h>


void create();
void display();
void insert_before_node(int);


struct student
{
	int roll;
	char name[20];
	struct student *next;
};
struct student *head,*tail;

void main()
{
	int ch,roll;
	head=tail=NULL;
	while(1)
	{
		printf("\n Press 1 to create \n Press 2 to display \n Press 3 to insert before a particular node \n Press 4 to exit \n");
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
		 	printf("\nEnter the roll to be searched: ");
		 	scanf("%d",&roll);
		    insert_before_node(roll);
		 	break;
		case 4:
			printf("\nTHE END!");
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
	printf("\n\nThe roll is %d\n",q->roll);
	printf("The name is :");
	puts(q->name);
	q=q->next;
}
}
void insert_before_node(int roll_num)
{
	struct student *temp=head,*z,*ano=head;
	z=(struct student*)malloc(sizeof(struct student));
	int pos=1,flag=0,count=1;
	
	while(temp!=NULL)
	{
		if(temp->roll==roll_num)
		{
			flag=1;
			printf("\nThe position of the particular node is %d",pos);
			break;
		}
		else
		{
			temp=temp->next;
			pos=pos+1;
		}
	}
	if(flag==0)
	printf("\nThe entered roll is not found!\n");
	
	while(count<pos-1)
	{
		ano=ano->next;
	}
	printf("\n\nEnter the roll of the new node: ");
	scanf("%d",&z->roll);
	printf("\nEnter the name in the new node: ");
	fflush(stdin);
	gets(z->name);
	ano->next=z;
	z->next=temp;
}

