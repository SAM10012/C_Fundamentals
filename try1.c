#include<stdio.h>
void main()
{
	int n,i,j,k,a,b,max;
	int array[n];
	printf("Enter the no. of elements in the array:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the elements of the array:\n");
		scanf("%d",&array[i]);
	}
 for(i=0;i<n;i++)
	{
		for(j>i;j<n;j++)
		{
			for(k<i;k<n;k--)
			{
				if((array[i]>array[j])&&(array[i]>array[k]))
				max=array[i];
			}
		}
	}
	printf("%d",max);
}
