#include<stdio.h>
#include<conio.h>
void main()
{
	char p[15];
	char *q;
	int count;
	printf("\nEnter a string: ");
	gets(p);
	q=&p;
	while(*q!='\0')
	{
		count++;
		q=q+1;
	}
	printf("\nThe length of the entered string is %d",count);
	
}
