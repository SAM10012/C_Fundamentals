#include<stdio.h>
#include<conio.h>

void repeat(int,char);
void main()
{
	char name[];
	int n;
	printf("Enter your name:\n");
	scanf("%c",&name);
	printf("How many times do you want it to repeat?:\n");
	scanf("%d",&n);
	repeat(n,name);
}
void repeat(int a,char string[])
{
	if(a==0)
	printf("No repeatation\n");
	else
	{
		printf("%s\n",string);
		a--;
		repeat(a,string);
	}
}
