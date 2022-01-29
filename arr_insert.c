#include<stdio.h>
#include<conio.h>
#define MAX 10
void main()
{
	int arr[MAX],i,item,pos,n;
	printf("\nEnter the no. of elements of the array: ");
	scanf("%d",&n);
	printf("\nEnter the elements of the array:\n");
	for(i=1;i<=n;i++)
	{
		printf("\nEnter '%d' element: ",i);
		scanf("%d",&arr[i]);
	}
	printf("\nThe elements of the array are:   ");
	for(i=1;i<=n;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\nEnter the item to be inserted: ");
	scanf("%d",&item);
	printf("\nEnter the position of insertion: ");
	scanf("%d",&pos);
	for(i=n;i>=pos;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[pos]=item;
	printf("\nThe elements of the array after insertion are:   ");
	for(i=1;i<=n+1;i++)
	{
		printf("%d\t",arr[i]);
	}
	
}
