#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	printf("Enter the values of a and b:\n");
	scanf("%d%d",&a,&b);
	c=b;
	b=a;
	a=c;
	printf("The new values of a and b are a=%d and b= %d",a,b);
	getch();
}

