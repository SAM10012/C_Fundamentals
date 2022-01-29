#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<malloc.h>

void addq();
void delq();
void display();

struct node
{
	int data;
	struct node *link;
};

void main()
{
	struct node *front,*rear;
	front=NULL;
	rear=NULL;
	int e,ch;
	while(1)
	{
		printf("\n Press 1 to insert \n Press 2 to delete \n Press 3 to display \n Press 4 to exit \n");
		printf("\n Enter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\n Enter the element: ");
				scanf("%d",&e);
				addq(&front,&rear,e);
				break;
			case 2:
				delq(&front,&rear);
				break;
			case 3:
				display(front);
				break;
			case 4:
				exit(0);
				break;
			default:
				printf("\n INVALID CHOICE! ");
				break;
		}
	}
}

void addq(struct node **f,struct node **r,int num)
{
	struct node *q;
	q=(struct node *)malloc(sizeof(struct node));
	q->data=num;
	q->link=NULL;
	if(*f==NULL)
	*f=q;
	else
	{
	*raaaaa->link=q;
	*r=q;
}
}

void delq(struct node **f,struct node **r)
{
	struct node *q;
	int item;
	if(*f==NULL)
	printf("\n Queue is empty ");
	else
	{
		q=*f;
		item=q->data;
		*f=q->link;
		free(q);
		if(*f==NULL)
		{
			*r=NULL;
		}
		printf("\n Value deleted is %d",item);
	}
}

void display(struct node *q)
{
	while(q!=NULL)
	{
		printf("%d\t",q->data);
		q=q->link;
	}
}

