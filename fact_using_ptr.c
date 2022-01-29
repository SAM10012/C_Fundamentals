#include<stdio.h>
#include<conio.h>
void main()
{
	int n,z=1,*pn;
	pn=&n;
	printf("Enter the number:\n");
	scanf("%d",&n);
	while(*pn>0)
	{
		z=(*pn)*z;
		*pn=*pn-1;
	}
	printf("The factorial of the number is %d",z);
}

