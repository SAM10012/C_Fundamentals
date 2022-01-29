#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	char c[5];
	int i,j,temp,m,k,n;
	printf("\n Enter the input: ");
	scanf("%s",c);
	i = atoi(c);
	temp=i;
	n=i;
	printf(" The int is %d\n",i);
	for(k=i;k>0;k--)
	{
		temp = i;
		for(j=0;j<i;j++)
		{
			
			for(m=n;m>0;m--)
			{
				printf("%d ",temp);
			}
			temp = temp-1;
			
		}
		printf("\n");
		n=n-1;
	}
	
}
