#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define N 5

void enqueue(int [],int);
void dequeue(void);
void display(int []);

int stack1[N],stack2[N];

int top1=-1;
int top2=0;


void main()
{
	int item,ch;
	while(1)
	{
	printf("\n Press 1 to enqueue \n Press 2 to dequeue \n Press 3 to display \n Press 4 to exit \n");
	printf("\n Enter your choice: ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("\n Enter the item to be inserted in the queue: ");
			scanf("%d",&item);
			enqueue(stack1,item);
			break;
		case 2:
			dequeue();
			break;
		case 3:
			display(stack1);
			break;
		case 4:
			printf("\n THE END! \n");
			exit(0);
			break;
		default:
			printf("\n Invalid Choice... \n");
			break;
	}
}
}

void enqueue(int stack1[N],int num)
{
	if(top1==N-1)
	{
	printf("\n Queue Overflow! \n");
	exit(0);
	}
	else
	{
		top1=top1+1;	
		stack1[top1]=num;
	}
}

void dequeue(void)
{
	int num;
if(top1<0)
	{
		printf("\n Queue Underflow! \n");
		
	}
	
	do
	{
		stack2[top2]=stack1[top1];
		top2++;
		top1--;
	}while(top1!=-1);
	
	top2--;
	top1++;
	
	num=stack2[top2];
	printf("\n %d is deleted from queue \n",num);
	top2=top2-1;
	
	do
	{
		stack1[top1]=stack2[top2];
		top1++;
		top2--;
	}while(top2!=-1);
	top1--;
	top2++;
	
}

void display(int stack3[N])
{

	int i;
	int top3=top1;
	
	printf("\n The elements of the queue are: ");
	
	for(i=0;i<=top3;i++)
	{
		printf("\t%d",stack3[i]);
	}
}
