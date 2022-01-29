#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[10],n,i,j,temp;
	printf("Enter the number of elements in the array: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the '%d' element: ",i);
		scanf("%d",&arr[i]);
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
	for(i=0;i<n;i++)
	{
		printf("\nEnter the '%d' element is %d\n ",i,arr[i]);
	}
}
