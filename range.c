#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,count;
	printf("The prime no.s between 0 and 100 are as follows: \n");
	for(i=1;i<=100;i++)
	{
		count=0;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
		count++;
		break;
		}
		}
		if(count==0)
		{
			printf("\t%d",i);
		}
	}
	
}
