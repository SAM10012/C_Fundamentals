/*PROGRAM NO.2*/


#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>
#include<string.h>


void create();
void display();
void delete_after_node(int);


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
		printf("\n Press 1 to create \n Press 2 to display \n Press 3 to delete after a particular node \n Press 4 to exit \n");
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
		    delete_after_node(roll);
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
void delete_after_node(int roll_num)
{
	struct student *temp=head,*ano;
	
	int pos=1,flag=0;
	
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
	ano=temp->next;
	temp->next=ano->next;
	free(ano);
}

