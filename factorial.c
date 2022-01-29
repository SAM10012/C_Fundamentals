#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,k,product=1;
	printf("Enter the number:\n");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		k=i;
		product=product*k;
	}
	printf("The factorial of %d is %d",n,product);
}

