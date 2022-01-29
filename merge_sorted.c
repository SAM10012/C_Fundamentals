#include<stdio.h>
#include<conio.h>
#define N 15
void main()
{
	int arr1[N],arr2[N],i,j=0,k=0,n1,n2,n,temp;
	printf("\n Enter the no. of elements in the array 1: ");
	scanf("%d",&n1);
	for(i=0;i<n1;i++)
	{
		printf("\n Enter '%d' element: ",i+1);
		scanf("%d",arr1+i);
	}
	printf("\n Enter the no. of elements in the array 2: ");
	scanf("%d",&n2);
	for(i=0;i<n2;i++)
	{
		printf("\n Enter '%d' element: ",i+1);
		scanf("%d",arr2+i);
	}
	printf("\n The elements of the array 1 are as follows: ");
	for(i=0;i<n1;i++)
	{
		printf("\n The '%d' element is %d",i+1,*(arr1+i));
	}
	printf("\n The elements of the array 2 are as follows: ");
	for(i=0;i<n2;i++)
	{
		printf("\n The '%d' element is %d",i+1,*(arr2+i));
	}
	n=n1+n2;
	int new_arr[n];
	for(i=0;i<n;)
	{
		if(j<n1 && k<n2)
		{
			if(arr1[j]<arr2[k])
			{
				new_arr[i]=arr1[j];
				j++;
			}
			else 
			{
				new_arr[i]=arr2[k];
				k++;
			}
			i++;
		}
		else if(j==n1)
		{
			for(;i<n;)
			{
				new_arr[i]=arr2[k];
				k++;
				i++;
			}
		}
		else if(k==n2)
		{
			for(;i<n;)
			{
				new_arr[i]=arr1[j];
				j++;
				i++;
			}
		}
	}
	
	
	printf("\n The elements of the new array are as follows: ");
	for(i=0;i<n;i++)
	{
		printf("\n The '%d' element is %d",i+1,new_arr[i]);
	}
}
