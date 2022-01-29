#include<stdio.h>
void main()
{
	int n,i,j,k=(n-1),max;
	int array[n];
	printf("Enter the no. of elements in the array:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the elements of the array:\n");
		scanf("%d",&array[i]);
	}
	do
	{
		for(j=0;j<n;j++)
		{
			if(array[k]>array[j])
			{
				max=array[k];
			}
			continue;
		}
		k--;
	}while(k>=0);
	
	printf("%d",max);
}
