#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,test=1;
	printf("Enter the number: ");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		test=0;
	}
	if(test==1)
	printf("The number is prime");
	else
	printf("The number is not prime");
	
}
