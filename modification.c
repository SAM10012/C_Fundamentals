#include<stdio.h>
#include<malloc.h>
void main()
{
	int *ptr,i,n;
	printf("Enter the size of the array:\n");
	scanf("%d",&n);
	ptr=(int*)malloc(sizeof(int)*n);
	printf("Enter the elements of the array:\n");
	for(i=0;i<n;i++)
		scanf("%d",&ptr[i]);
	printf("Elements of the array:\n");
	for(i=0;i<n;i++)
		printf("%d ",ptr[i]);
	printf("\n");
	for(i=0;i<n;i++)
	{
		if(ptr[i]%10==0)
			ptr[i]=ptr[i]+5;
	}
	printf("Elements after modification:\n");
	for(i=0;i<n;i++)
		printf("%d ",ptr[i]);
	printf("\n");
}

