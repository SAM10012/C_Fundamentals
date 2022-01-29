#include<stdio.h>
#include<conio.h>
void main()
{
	int n,rem,sum=0;
	printf("Enter the number:\n");
	scanf("%d",&n);
	while(n>0)
	{
		rem=n%10;
		if(rem%2!=0)
		{
			sum=sum+rem;
		}
		
		n=n/10;
	}
	printf("The sum of the odd digits is %d\n",sum);
}
