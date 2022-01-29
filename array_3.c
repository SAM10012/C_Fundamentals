/*Sum of the values in an n-element array which are multiples of 7*/
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
		if((array[i])%7==0)
		{
			sum=sum+array[i];
		}
	}
	printf("The required sum is %d",sum);
}
