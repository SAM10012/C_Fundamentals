/*FIBONACCI SERIES*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a=0,b=1,c,n,i;
	printf("Enter the no. of elements of the series except 0 and 1:\n");
	scanf("%d",&n);
	printf("%d\t%d",a,b);
	for(i=0;i<n;i++)
	{
		c=a+b;
		printf("\t%d",c);
		a=b;
		b=c;
	}
	
}
