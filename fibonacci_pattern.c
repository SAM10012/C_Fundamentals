#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,n,i,j;
		printf("Enter the n-th term of the series:\n");
	scanf("%d",&n);
	
		printf("0\n");
		for(i=2;i<=n;i++)
	{	a=0;
	b=1;
		
			printf("%d\t%d\t",a,b);
	for(j=3;j<=i;j++)
		{
		if(j<=i)
		{
		
		c=a+b;
		printf("%d\t",c);
}

		a=b;
		b=c;
	}
	printf("\n");
	}
	}
