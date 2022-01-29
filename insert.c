#include<stdio.h>
void main()
{
	int n,m,i,z;
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
	printf("Enter the new element:\n");
	scanf("%d",&z);
	array[(m-1)]=z;
	for(i=0;i<n;i++)
	{
		if((m-1)==(n-1))
		{
				printf("Array Full\n");
				break;
				}
		else
		printf("%d\n",array[i]);
	}
	}
	
