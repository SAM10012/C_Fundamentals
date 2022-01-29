#include<stdio.h>
#include<conio.h>
int main()
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
	return 0;
}
