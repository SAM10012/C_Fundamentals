#include<stdio.h>
#include<conio.h>
#define N 15
void main()
{
	int arr[N],i,j,n,temp;
	printf("\n Enter the no. of elements in the array: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n Enter '%d' element: ",i+1);
		scanf("%d",arr+i);
	}
	printf("\n The elements of the array are as follows: ");
	for(i=0;i<n;i++)
	{
		printf("\n The '%d' element is %d",i+1,*(arr+i));
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(*(arr+i)>*(arr+j))
			{
				temp=*(arr+i);
				*(arr+i)=*(arr+j);
				*(arr+j)=temp;
			}
		}
	}
	printf("\n The elements of the array after sorting are as follows: ");
	for(i=0;i<n;i++)
	{
		printf("\n The '%d' element is %d",i+1,*(arr+i));
	}
}
