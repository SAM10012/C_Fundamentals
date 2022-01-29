#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 5
void push(int [],int);
void pop(int []);
void display(int []);
int top=-1;
void main()
{
	int a[MAX],item,ch;
	while(1)
	{
		printf("\nPress 1 for push: \nPress 2 for pop: \nPress 3 for display: \nPress 4 for exitting: \n\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				{
					printf("\nEnter a value: ");
					scanf("%d",&item);
					push(a,item);
					break;
					
				}
			case 2:
				{
					pop(a);
					break;
				}
			case 3:
				display(a);
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
	void push(int a[],int item)
	{
		if(top==MAX-1)
		{
			printf("\nStack Overflow");
			exit(0);
		}
		top=top+1;
		a[top]=item;
	}
	void pop(int a[])
	{
		int item;
		if(top==-1)
		{
			printf("\nStack Underflow");
			exit(0);
		}
		item=a[top];
		top=top-1;
		printf("\nThe deleted element is %d",item);
	}
	void display(int a[])
	{
		int i;
		if(top==-1)
		printf("\nThere are no elements in the stack!\n");
		for(i=0;i<=top;i++)
		{
			printf("%d\t",a[i]);
		}
	}

