#include<stdio.h>
#include<conio.h>
void linear_search(int p[],int size,int k);
void main()
{
	int arr[20],i,num,s;
	printf("\nEnter the size of the array: ");
	scanf("%d",&s);
	printf("\nEnter the elements of the array: ");
	for(i=0;i<s;i++)
	{
		printf("\nEnter '%d' element: ",i);
		scanf("%d",&arr[i]);
	}
	printf("\nEnter the element to be searched: ");
	scanf("%d",&num);
	linear_search(arr,s,num);
}
void linear_search(int p[],int size,int k)
{
	int temp,j,flag=0;
	for(j=0;j<size;j++)
	{
		if(p[j]==k)
		{
			printf("\nThe element %d is found at position '%d'",k,j);
			flag=1;
		}
	}
	if(flag==0)
	{
		printf("%d element is not found in the array!",k);
	}
}
