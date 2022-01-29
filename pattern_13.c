#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k;
	
		for(i=1;i<=5;i++)
	{k=5;
		for(j=1;j<=5;j++)
		{
			if(j<=6-i)
			{
			printf("%d",k);
			k--;
				}
			else
			printf(" ");
		}
		printf("\n");
	}
		}
