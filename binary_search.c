#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[10],n,i,temp=0,num,low,high,mid;
	printf("Enter the number of elements in the array: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the '%d' element: ",i);
		scanf("%d",&arr[i]);
	}
	printf("Enter the number to be searched: ");
	scanf("%d",num);
	low=0;
	high=n-1;
	while(low<=high)
	{
		mid=((low+high)/2);
		if(arr[mid]==num)
		{
		printf("\nThe position of %d is index '%d'",num,mid);
		temp=1;
		break;
		}
		if(arr[mid]>num)
		high=mid-1;
		else
		low=mid+1;
	}
	if(temp==0)
	printf("Data not found");
}
	
