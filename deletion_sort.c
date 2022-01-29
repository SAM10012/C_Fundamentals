#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[10],n,i,j,num;
	printf("Enter the number of elements in the array: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the '%d' element: ",i);
		scanf("%d",&arr[i]);
	}
	printf("Enter the position from which value is to be deleted: ");
	scanf("%d",&j);
	for(i=j;i<n-1;i++)
	{
		arr[i]=arr[i+1];
	}
	for(i=0;i<=n-2;i++)
	printf("\n index '%d' element is %d",i,arr[i]);
}
