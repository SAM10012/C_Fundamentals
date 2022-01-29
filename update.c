#include<stdio.h>
#include<conio.h>
void main()
{
	char p[15],s,r;
	char *q;
	printf("\nEnter a string: ");
	gets(p);
	q=&p;
	fflush(stdin);
	printf("\nEnter the character to be searched: ");
	scanf("%c",&s);
	fflush(stdin);
	printf("\nEnter the character with which replacement is to be done: ");
	scanf("%c",&r);
	while(*q!='\0')
	{
		if(*q==s)
		{
			*q=r;
		}
		q=q+1;
	}
	printf("\nThe updated string is %s",p);
}
