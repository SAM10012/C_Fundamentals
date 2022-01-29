#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>

void create();
void display();
void sort();
void update();
void reverse();


struct student
{
	int roll;
	struct student *link;
};
struct student *head,*tail;

void main()
{
	int ch;
	head=tail=NULL;
	while(1)
	{
	printf("\n Press 1 to create \n Press 2 to display \n Press 3 to sort \n Press 4 to exit \n Press 5 to update \n Press 6 to reverse \n");
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
				sort();
				break;
			case 4:
				printf("\nTHE END!");
				exit(0);
				break;
			case 5:
			    update();
				break;
			case 6:
				reverse();
				break;
		    default: 
				printf("\nInvalid choice...");
				break;
		}
	}
}
void create()
{
	struct student *p;
	p=(struct student*)malloc(sizeof(struct student));
	if(p==NULL)
	printf("\nMemory allocation unsuccessful due to insufficient memory!");
	else
	{
	printf("\nEnter the roll no.: ");
	scanf("%d",&p->roll);
	p->link=NULL;
}
if(head==NULL)
{
	head=tail=p;
}
else
{
	tail->link=p;
	tail=p;
}

}
void display()
{
	struct student *q=head;
	if(q==NULL)
	printf("\nThere is no node present in the linked list...");
	while(q!=NULL)
	{
		printf("%d\t",q->roll);
		q=q->link;
	}
	
}
void sort()
{
	int temp,n=0,i;
	struct student *y=head,*w=head;
	struct student *z=head->link;
	
	while(w!=NULL)
	{
		n++;
		w=w->link;
	}
	printf("\nThe total no. of nodes in the linked list is %d",n);
	
	for(i=0;i<n;i++)
	{
		while(z!=NULL)
		{
		if(y->roll > z->roll)
		{
			temp=y->roll;
			y->roll=z->roll;
			z->roll=temp;
		}
			y=y->link;
			z=z->link;
		}
		y=head;
		z=head->link;
	}

}
void update()
{
	struct student *d=head;
	int a,item,flag=0;
	printf("\nEnter the roll to be searched: ");
	scanf("%d",&a);
	printf("\nEnter the new roll: ");
	scanf("%d",&item);
	while(d!=NULL)
	{
		if(d->roll==a)
		{
			d->roll=item;
			flag=1;
		}
		d=d->link;
	}
	if(flag==0)
	printf("\nRoll not found in the linked list!\n");
	
}
void reverse()
{
	struct student *curr=head,*prev=NULL,*sprev=NULL;
	while(curr!=NULL)
	{
		sprev=prev;
		prev=curr;
		curr=curr->link;
		prev->link=sprev;
	}
	head=prev;
	
}
