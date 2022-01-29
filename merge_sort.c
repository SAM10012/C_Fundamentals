#include<stdio.h>
#define MAX 10
void merge_sort(int [],int,int);
void merge(int [],int,int);
int main()
{
	int a[MAX],n,i;
	printf("\nEnter the size of the array: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter a value: ");
		scanf("%d",&a[i]);
	}
	merge_sort(a,0,n-1);
	printf("\nThe sorted array is: ");
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
	return 0;
}
void merge_sort(int a[],int low,int high)
{
	int mid;
	if(low<high)
	{
		mid=(low+high)/2;
		merge_sort(a,low,mid);
		merge_sort(a,mid+1,high);
		merge(a,low,mid,high);
	}
	else
	return;
}
void merge(int a[],int low,int mid,int high)
{
	int i,j,k=0,1;
	int c[100];
	i=low;
	j=mid+1;
	while(i<=mid&&j<=high)
	{
		if(a[i]<a[j])
		{
			c[k]=a[i];
			i++;
			k++;
		}
		else
		{
			c[k]=a[j];
			j++;
			k++;
		}
	}
	if(i<=mid&&j>high)
	{
		while(i<=mid)
		{
			c[k]=a[i];
			k++;
			i++;
		}
	}
	if(i>mid&&j<=high)
	{
		while(j<=high)
		{
			c[k]=a[j];
			k++;
			j++;
		}
	}
	i=low;
	for(l=0;l<k;l++)
	{
		a[i]=c[l];
		i++;
	}
}
		
	}
}
