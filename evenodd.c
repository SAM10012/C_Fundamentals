#include<stdio.h>
void main()
{
	int n,i,j,k;
	int array[n],odd[n],even[n];
	printf("Enter the no. of elements in the array:\n");
	scanf("%d",&n);
	printf("Enter the elements of the array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	
	for(i=0;i<n;i++)
	{
		if((array[i])%2==0)
		{
		
			for(j=0;j<n;j++)
			{
				even[j]=array[i];
				printf("The even elements are %d\n",even[j]);
				
		break;
				
			}
		}
		else
		{
			
			for(k=0;k<n;k++)
			{
				odd[k]=array[i];
				printf("The odd elements are %d\n",odd[k]);
		break;
				
			}
		}
	}
	
}

