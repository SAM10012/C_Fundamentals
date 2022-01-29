/* SUM OF FIRST N NATURAL NUMBERS */
#include<stdio.h>
int recursion(int);
void main()
{
	int n,sum=0;
	printf("\n Enter the no. upto which sum is to be done: ");
	scanf("%d",&n);
	sum=recursion(n);
	printf("\n The sum upto %d is %d",n,sum);
}

int recursion(int n)
{
	if(n==0)
	return 0;
	else
	return n+recursion(n-1);
}
