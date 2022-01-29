/* CONVERSION OF A DECIMAL NUMBER TO BINARY */
#include<stdio.h>
int recursion(int);
void main()
{
	int n,bin;
	printf("\n Enter the decimal no. whose binary equivalent is to be calculated : ");
	scanf("%d",&n);
	bin=recursion(n);
	printf("\n The binary equivalent of %d is %d",n,bin);
}

int recursion(int n)
{
	if(n==0)
	return 0;
	else if(n==1)
	return 1;
	else
	return (n%2)+10*recursion(n/2);
}
