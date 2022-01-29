/*To print the contents of an array from last to first*/
#include<stdio.h>
void main()
{
	int n,i,j;
	int array[n];
	printf("Enter the no. of elements in the array:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the elements of the array:\n");
		scanf("%d",&array[i]);
	}
	for(j=(n-1);j>=0;j--)
	{
		for(i=0;i<n;i++)
		{
			array[j]=array[i];
			
		}
						
	}
	for(j=0;j<n;j++)
	printf("%d\n",array[j]);
}
