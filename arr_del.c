#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 10
void main()
{
	int arr[MAX],i,item,pos,n,ch,flag=0;
	printf("\nEnter the no. of elements of the array: ");
	scanf("%d",&n);
	printf("\nEnter the elements of the array:\n");
	for(i=1;i<=n;i++)
	{
		printf("\nEnter '%d' element: ",i);
		scanf("%d",&arr[i]);
	}
	printf("\nThe elements of the array are:   ");
	for(i=1;i<=n;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n\n This deletion procedure is valid for deletion of one element only!\n");
	while(1)
	{
	printf("\n Press 1 for deleting from position: \n Press 2 for deleting item of your choice: \n");
	printf("\nEnter your choice: ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("\nEnter the position from which item is to be deleted: ");
			scanf("%d",&pos);

			for(i=pos;i<n;i++)
			{
				arr[i]=arr[i+1];
			}
			printf("\nThe elements of the array after deletion are:   ");
			for(i=1;i<n;i++)
			{
				printf("%d\t",arr[i]);
			}
			exit(0);
			
		case 2:
			printf("\nEnter the item to be deleted: ");
			scanf("%d",&item);
			for(i=1;i<=n;i++)
			{
				if(arr[i]==item)
				{
					pos=i;
					flag=1;
				}
			}
			if(flag==0)
			{
			printf("\nYour entered item is not found in the array!\n");
			exit(0);
			}
			for(i=pos;i<n;i++)
			{
				arr[i]=arr[i+1];
			}
			printf("\nThe elements of the array after deletion are:   ");
			for(i=1;i<n;i++)
			{
				printf("%d\t",arr[i]);
			}
			exit(0);
			
		default:
			printf("\n INVALID CHOICE...");
			break;
	}
}		
}
