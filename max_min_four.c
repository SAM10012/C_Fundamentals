#include<stdio.h>
#include<conio.h>
#define MAX 100
void main()
{
	int n,i,max,min,arr[MAX];
	printf("\nEnter the no. of elements: ");
	scanf("%d",&n);
	printf("\nEnter the elements: ");
	for(i=0;i<n;i++)
	{
		printf("\nEnter %d element: ",i);
		scanf("%d",&arr[i]);
	}
	max = arr[0];
	min = arr[0];
	for(i=0;i<n;i++)
	{
		if(arr[i] >= max)
		max = arr[i];
		if(arr[i] <= min)
		min = arr[i];
	}
	
	printf("\n The maximum element is %d",max);
	printf("\n The minimum element is %d",min);
}
