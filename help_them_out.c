#include<stdio.h>

int main()
{
	int arr[1000000];
	int i,j,k,count=0,n,sum=0,sum1=0,flag=0;
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i++)
	{
		sum = sum + arr[i];
	}
	
	
	while(1)
	{
		for(j=0;j<n;j++)
		{
			
			if(arr[j]%2 == 0)
			{
				flag=1;
			}
			else if(arr[j]%2!=0)
			{
				arr[j] = arr[j] - 1;
				flag=0;
				count = count + 1;	
			}
		}
		if(flag == 1)
		{
			for(k=0;k<n;k++)
			{
				arr[k] = arr[k] / 2;	
			}
			count = count + 1;
		}
		sum1 =0;
		for(i=0;i<n;i++)
		{
			sum1 = sum1 + arr[i];
		}
		
		sum = sum1;

		if(sum == 0)
		break;
		else
		continue;
		
	}
	
	printf("%d",count);
	
	return 0;
}
