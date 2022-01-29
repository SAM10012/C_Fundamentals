#include<stdio.h>
#include<conio.h>
void main()
{
	int a=0,b=1,c,n,i;
	printf("Enter the n-th term of the series:\n");
	scanf("%d",&n);
	printf("%d\t%d\t",a,b);
	for(i=1;i<=n;i++)
	{
		c=a+b;
		printf("%d\t",c);
		a=b;
		b=c;
	}
	
}
