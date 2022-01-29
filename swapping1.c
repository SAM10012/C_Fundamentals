#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	printf("Enter the values of a and b:\n");
	scanf("%d%d",&a,&b);
	b=a+b;
	a=b-a;
	b=b-a;
	printf("The new values of a and b are a=%d and b= %d",a,b);
	getch();
}
