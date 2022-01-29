/*BUBBLE SORT PROGRAM*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[25],n,i,j,temp;
	printf("\n Enter the size of the array: ");
	scanf("%d",&n);
	printf("\n Enter the elements: ");
	for(i=0;i<n;i++)
	{
		printf("\n Enter '%d' element: ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("\n The elements of the array before sorting are as follows: ");
	for(i=0;i<n;i++)
	{
		printf("\n The '%d' element is %d. \n",i+1,arr[i]);
	}
	
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	
	printf("\n The elements of the array after sorting are as follows: ");
	for(i=0;i<n;i++)
	{
		printf("\n The '%d' element is %d. \n",i+1,arr[i]);
	}
	
}
