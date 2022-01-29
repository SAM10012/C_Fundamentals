#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#define MAX 30

int stack[MAX];
int top=-1;

void push(char);
char pop();
int op(char);
int precedence(char);
char* convert(char []);

void main()
{
	char infix[MAX],*p;
	
	printf("\n Enter the infix expression: ");
	fflush(stdin);
	gets(infix);
	p=convert(infix);
	printf("\n The corresponding postfix expression is: ");
	
}

void push(char item)
{
	if (top==MAX-1)
	{
		printf("\n Stack Overflow!");
	}
	else
	{
		top=top+1;
		stack[top]=item;
	}
}

char pop()
{
	char item;
	if (top==-1)
	{
		printf("\n Stack Underflow!");
		exit(0);
	}
	else
	{
		item=stack[top];
		top=top-1;
		return item;
	}
}

int op(char symbol)
{
	if (symbol=='+'||symbol=='-'||symbol=='*'||symbol=='/'||symbol=='^')
	return (1);
	else
	return (0);
}

int precedence(char symbol)
{
	if(symbol=='^')
	return (3);
	else if (symbol=='*'||symbol=='/')
	return (2);
	else if (symbol=='+'||symbol=='-')
	return (1);
	else
	return (0);
}

char* convert(char infix[])
{
	char postfix[MAX],*p=postfix; 
	char x;
	int i=0;
	strcat(infix,")");
	push('(');
	char *character;
	character=infix;
	
	
	while(*character!='\0')
	{
		printf("\n %c",*character);
		if(*character=='(')
		{
			push(*character);
		}
		else if(*character==')')
		{
			while(*character!='(')
			{
				x=pop();
				postfix[i]=x;
				i++;
			}
			x=pop();
		}
		else if(isdigit(*character)||isalpha(*character))
		{
			postfix[i]=*character;
			
			i++;
			
		}
		else if(op(*character)==1)
		{
			x=pop();
			if(op(x)==0)
			{
				postfix[i]=*character;
				
				i++;
			}
			else
			{
			while(op(x)==1)
			{
				if(precedence(x)>precedence(*character)||precedence(x)==precedence(*character))
				{
					postfix[i]=x;
					
					i++;
					x=pop();
				}
				else
				{
					push(x);
					push(*character);
				}
			}
		}
		}
		character++;
	}
	postfix[i]='\0';
	puts(postfix);
	
	return p;
}
	

