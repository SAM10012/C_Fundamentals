/* To find the average of values in an array and then print those values from the array which are more than the average value*/
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
		sum=sum+array[i];
}
for(i=0;i<n;i++)
{
	if(array[i]>(sum/n))	
	{
		printf("The elements greater than average are %d\n",array[i]);
	}
}
	
}
