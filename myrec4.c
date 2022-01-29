/* FIBONACCI SERIES OF FIRST N NATURAL NUMBERS */
#include<stdio.h>
int recursion(int);
void main()
{
	int n,fibonacci,i,sum=0;
	printf("\n Enter the no. upto which fibonacci is to be calculated: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		fibonacci=recursion(i);
		sum+=fibonacci;
		printf("%d ",fibonacci);
	}
	printf("\n The sum of Fibonacci series upto %d is %d",n,sum);
}

int recursion(int n)
{
	if(n==0)
	return 0;
	else if(n==1)
	return 1;
	else
	return recursion(n-1)+recursion(n-2);
}
