#include<stdio.h>
void main()
{
	int arr[15],i,n,temp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n/2;i++)
	{
		temp = arr[i];
		arr[i] = arr[n-i-1];
		arr[n-i-1] = temp;
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
}
