// Qs. No.59.b.
// Write a C program to implement Binary Search.

#include<stdio.h>
#include<conio.h>

void binary_search(int p[],int size,int k);

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
	binary_search(arr,s,num);
}
void binary_search(int p[],int size,int k)
{
	int low=0,high=size-1,mid,j,flag=0;
	
	
	
	while(low<=high)
	{
	mid=(high+low)/2;
	
	
		if(p[mid]==k)
		{
		flag=1;
		break;
		}
		else
		{
			if(p[mid]>k)
			high=mid-1;
			else if(p[mid]<k)
			low=mid+1;
		}
	
}

if(flag==1)
	printf("\n%d is found at position '%d'",k,mid);
	else
	printf("\nValue not found");
}
	


