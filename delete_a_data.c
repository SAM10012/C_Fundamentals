#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[10],n,i,num,temp=0,pos;
	printf("Enter the number of elements in the array: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the '%d' element: ",i);
		scanf("%d",&arr[i]);
	}
	printf("Enter the number to be deleted: ");
	scanf("%d",num);
	for(i=0;i<n;i++)
	{
		if(arr[i]==num)
		{
		temp=1;
		pos=i;
		break;
	}

	}
	if(temp==1)
	{
		for(i=pos;i<=(n-2);i++)
		{
			arr[i]=arr[i+1];
		}
	
	for(i=0;i<=(n-2);i++)
	{
	printf("\n index '%d' element is %d",i,arr[i]);
}
}
else
printf("\nData not found\n");
}
