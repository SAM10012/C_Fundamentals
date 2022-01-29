#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct book
{
	int pg;
	struct book *link;
};
void push(int);
void pop();
void display();

struct book *top=NULL;

void main()
{
	int ch,data;
	while(1)
	{
		printf("\n Press 1 to push \n Press 2 to pop \n Press 3 to display \n Press 4 to exit \n");
		printf("\n Enter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\n Enter a no. of pages of the new book: ");
				scanf("%d",&data);
				push(data);
				break;
			case 2:
				pop();
				break;
			case 3:
				printf("\n The elements of the stack are: ");
				display();
				break;
			case 4:
				printf("\n THE END!");
				exit(0);
				break;
			default:
				printf("\n Invalid Choice...");
		}
	}
}

void push(int page)
{
	struct book *temp;
	temp=(struct book*)malloc(sizeof(struct book));
	if(temp==NULL)
	printf("\n Stack Overflow!");
	temp->pg=page;
	temp->link=top;
	top=temp;
}
void pop()
{
	int val;
	struct book *temp;
	if(top==NULL)
	printf("\n Stack Underflow!");
	val=top->pg;
	temp=top;
	top=top->link;
	free(temp);
}
void display()
{
	struct book *ptr=top;
	while(ptr!=NULL)
	{
		printf(" %d ",ptr->pg);
		ptr=ptr->link;
	}
}
