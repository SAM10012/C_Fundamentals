#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 5
struct stack
{
	int stk[MAX];
	int top;
};
void push(struct stack *s,int);
int pop(struct stack *s);
void display(struct stack *s);

void main()
{
	struct stack s1,s2;
	s1.top=-1;
	s2.top=-1;
	int i,item;
	printf("\n Enter the elements of the stack: ");
	for(i=0;i<MAX;i++)
	{
		scanf("%d",&item);
		push(&s1,item);
	}
	printf("\n The elements of the first stack are as follows: ");
	display(&s1);
	
	while(s1.top>=0)
	{
		push(&s2,pop(&s1));
	}
	
	printf("\n The elements of the second stack are as follows: ");
	display(&s2);
	
	printf("\n The sequentially deleted elements are: ");
	while(s2.top>=0)
	printf("%d\t",pop(&s2));
	
}

void push(struct stack *s,int item)
{
	s->stk[++s->top]=item;
}

int pop(struct stack *s)
{
	if(s->top<0)
	printf("\n Underflow! \n");
	else
	return s->stk[s->top--];
}

void display(struct stack *s)
{
	int i;
	
	for(i=0;i<=s->top;i++)
	{
	printf("%d\t",s->stk[i]);
	}
}

