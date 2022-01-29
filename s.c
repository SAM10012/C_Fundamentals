#include<stdio.h>
void main()
{
	int n=2,sum=5;
	switch(n)
	{
		case 2: sum=sum-2;
		case 3: sum*=5;
		break;
		default:
			sum=0;
	}
	printf("%d",sum);
}
