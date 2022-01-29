#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>

int stack[25];
int top=-1;

void push(int);
int pop();

void main()
{
	char exp[25];
	char *e=exp;
	int n1,n2,n3,num;
	printf("\n Enter the postfix expression: ");
	fflush(stdin);
	gets(exp);
	while(*e!='\0')
	{
		if(isdigit(*e))
		{
			num=*e-48;
			push(num);
		}
		else
		{
			n1=pop();
			n2=pop();
			switch(*e)
			{
				case '+':
					n3=n2+n1;
					break;
				case '-':
					n3=n2-n1;
					break;
				case '*':
					n3=n2*n1;
					break;
				case '/':
					n3=n2/n1;
					break;
			}
			push(n3);
		}
		e=e+1;
	}
	printf("\n The value of the postfix expression is %d",pop());
}

void push(int item)
{
	stack[++top]=item;
}

int pop()
{
	return stack[top--];
}
