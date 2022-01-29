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
	for(i=0;i<=n-2;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("\nThe value of '%d' element is %d\n",i,arr[i]);
	}
}
