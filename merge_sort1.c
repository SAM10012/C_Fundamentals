#include<stdio.h>
#include<conio.h>

void Merge_sort(int [],int ,int );
void Merge(int [],int ,int ,int );

void main()
{
	int n,i,arr[25];
	printf("\n Enter the no. of elements in the array: ");
	scanf("%d",&n);
	printf("\n Enter the elements of the array: ");
	for(i=0;i<n;i++)
	{
		printf("\n Enter '%d' element: ",i);
		scanf("%d",&arr[i]);
	}
	printf("\n The elements of the array are as follows: ");
	for(i=0;i<n;i++)
	{
		printf("\n The '%d' element is %d. ",i,arr[i]);
	}
	Merge_sort(arr,0,n-1);
	printf("\n The elements of the array after sorting are as follows: ");
	for(i=0;i<n;i++)
	{
		printf("\n The '%d' element is %d. ",i,arr[i]);
	}
	getch();
}

void Merge_sort(int arr[],int low,int high)
{
	int mid;
	if(low<high)
	{
		mid=(low+high)/2;
		Merge_sort(arr,low,mid);
		Merge_sort(arr,mid+1,high);
		Merge(arr,low,mid,high);
	}
}

void Merge(int arr[],int low,int mid,int high)
{
	int i,j,k,a,brr[25];
	i=low;
	k=low;
	j=mid+1;
	while(i<=mid && j<=high)
	{
		if(arr[i]<=arr[j])
		{
			brr[k]=arr[i];
			i=i+1;
		}
		else if(arr[j]<=arr[i])
		{
			brr[k]=arr[j];
			j=j+1;
		}
		k=k+1;
	}
	if(i<mid)
	{
		for(a=i;a<=mid;a++)
		{
			brr[k]=arr[a];
			k=k+1;
		}
	}
	else if(j<high)
	{
		for(a=j;a<=high;a++)
		{
			brr[k]=arr[a];
			k=k+1;
		}
	}
	
	for(a=low;a<=high;a++)
	{
	arr[a]=brr[a];
	}	
	
}
