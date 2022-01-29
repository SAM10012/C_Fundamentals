#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[10],n,i,j,temp=0,num;
	printf("Enter the number of elements in the array: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the '%d' element: ",i);
		scanf("%d",&arr[i]);
	}
	printf("Enter the number to be searched: ");
	scanf("%d",&num);
	for(i=0;i<n;i++)
	{
		if(arr[i]==num)
		{
		printf("The position of %d is index '%d'",num,i);
		temp=1;
	}
	}
	if(temp==0)
	printf(" %d is not found in the array",num);
}
	
