#include<stdio.h>
#include<conio.h>
#define max 3
void main()
{
	int arr[max][max],i,j,sum=0;
	printf("Enter the elements of the matrix: \n");
	for(i=0;i<max;i++)
	{
	for(j=0;j<max;j++)	
	{
		printf("\nThe arr[%d][%d] element is: ",i,j);
		scanf("%d",&arr[i][j]);
	}
	}
	printf("\n The matrix is: \n\n");
	for(i=0;i<max;i++)
	{
		for(j=0;j<max;j++)	
		{
			printf("\t%d",arr[i][j]);
		}
		printf("\n");
	}
	for(i=0,j=0;i<max,j<max;i++,j++)
	{
		sum=sum+arr[i][j];
	}
	printf("\nThe trace of the matrix is %d",sum);
}
