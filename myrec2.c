/* FACTORIAL OF FIRST N NATURAL NUMBERS */
#include<stdio.h>
int recursion(int);
void main()
{
	int n,factorial;
	printf("\n Enter the no. whose factorial is to be done: ");
	scanf("%d",&n);
	factorial=recursion(n);
	printf("\n The factorial of %d is %d",n,factorial);
}

int recursion(int n)
{
	if(n==0 || n==1)
	return 1;
	else
	return n*recursion(n-1);
}
