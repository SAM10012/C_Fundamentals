#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,z,sum=0;
	printf("Enter a number:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		z=(i*(i+1)/2);
		sum=sum+z;
	}
	printf("%d",sum);
}
