#include<stdio.h>
#include<conio.h>
void main()
{
	int n,m,brr[15],arr[30],carr[15],i,j,k,l=0,z,count1=0,count2=0,num;
	printf("\n Enter the size of the original array: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\n Enter '%d' element: ",i+1);
		scanf("%d",&arr[i]);
	}
	
	printf("\n The elements of the original array are as follows: ");
	for(i=0;i<n;i++)
	{
		printf("\n The '%d' element is %d. \n",i+1,arr[i]);
	}
	
	printf("\n Enter the size of the second array: ");
	scanf("%d",&m);
	
	for(j=0;j<m;j++)
	{
		printf("\n Enter '%d' element: ",j+1);
		scanf("%d",&brr[j]);
	}
	
	printf("\n The elements of the second array are as follows: ");
	for(j=0;j<m;j++)
	{
		printf("\n The '%d' element is %d. \n",j+1,brr[j]);
	}
	for(k=0;k<n;k++)
	{
	num=arr[k];
	for(i=0;i<n;i++)
	{
		if(num==arr[i])
		{
			count1=count1+1;
			printf("%d ",count1);
		}
	}
		for(j=0;j<m;j++)
	{
			if(num==brr[j])
		{
			count2=count2+1;
			printf("%d ",count2);
		}
		
	}
	if(count2<count1)
	{
		carr[l]=num;
		printf("%d\n",num);
		l++;
	
	}
	count1=0;
	count2=0;
	}
	printf("\n The missing numbers are: ");
	for(l=0;l<(n-m+1);l++)
	{
		printf("%d ",carr[l]);
	}
}

