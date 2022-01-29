#include<stdio.h>
void search(int array[],int n,int j);
void main()
{
	int array[100],n,i,j;
	printf("Enter total number of elements of the array:\n");
	scanf("%d",&n);
	printf("Enter the elements of the array:\n");
	for(i=0;i<n;i++)
		scanf("%d",&array[i]);
	printf("Enter the element to be searched:\n");
	scanf("%d",&j);
	search(array,n,j);
}
void search(int array[],int n,int j)
{
	int i,z=0;
	for(i=0;i<n;i++)
	{
		if(array[i]==j)
		{
			z=1;
			break;
		}
	}
	if(z==0)
		printf("Item not found\n");
	else
		printf("The position of %d is %d\n",j,i+1);
}
