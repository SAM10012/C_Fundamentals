/*Sum of the values stored at the even positions of the array*/
#include<stdio.h>
void main()
{
	int n,i,sum=0;
	int array[n];
	printf("Enter the no. of elements in the array:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the elements of the array:\n");
		scanf("%d",&array[i]);
		if(i%2==0)
		{
			sum=sum+array[i];
		}
	}
	printf("The sum of the values at even positions is %d",sum);
}
