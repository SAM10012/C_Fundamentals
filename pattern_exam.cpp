#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j;
	
		for(i=1;i<=4;i++)
	{
		for(j=1;j<=7;j++)
		{
			if(j>=5-i&&j<=i+3)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
		return 0;
		}
