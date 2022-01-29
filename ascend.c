#include<stdio.h>
#include<conio.h>
#define max 10
void main()
{
	int n,i,j,temp,arr[max];
	printf("\nEnter the number of elements: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter the '%d' element: ",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++)
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
	printf("\n The '%d' element is %d",i,arr[i]);
}
}
