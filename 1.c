#include<stdio.h>
#include<conio.h>
#define MAX 25

void push(int);
int pop();
void main()
{
	int i=0;
	int a,b,c;
	char exp[MAX];
	printf("\n Enter the postfix expression: ");
	fflush(stdin);
	gets(exp);
	while(exp[i]!='\0')
	{
		printf("\n The postfix expression is %s ",exp);
		i++;
	}
	while(exp[i]!='\0')
	{
		if(exp[i]=='+'||exp[i]=='-'||exp[i]=='*'||exp[i]=='/'||exp[i]=='^')
		{
			pop(a);
			pop(b);
			push(c);
		}
		else
		{
			push(int(exp[i]));
		}
		
	}
		printf("\n The value of the postfix expression is %d ",c);
}

void push(int item)
{
	int i=0;
	while(exp[i]!='\0')
	{
		
	}
}
