#include<stdio.h>
void main()
{
	int n,m,i;
	int array[n];
	printf("Enter the no. of elements in the array:\n");
	scanf("%d",&n);
		printf("Enter the elements of the array:\n");
	for(i=0;i<n;i++)
	{
			scanf("%d",&array[i]);
	}
	printf("Enter the position of new element:\n");
	scanf("%d",&m);
	for(i=0;i<n;i++)
	{
		if((i<(m-1))&&(i>(m-1)))
		{
				printf("%d\n",array[i]);
				
		}
	}
}
	
