#include<stdio.h>
#include<conio.h>
#define max 3
void main()
{
	int i,j,largest;
	int mat[max][max];
	printf("\nEnter the elements of the matrix: \n");
	for(i=0;i<max;i++)
	{
		for(j=0;j<max;j++)
		{
			printf("\nEnter the mat[%d][%d] element: ",i,j);
			scanf("%d",&mat[i][j]);
		}
	}
	for(i=0;i<max;i++)
	{
		for(j=0;j<max;j++)
		{
			printf("\t%d",mat[i][j]);
		}
		printf("\n");
	}
	largest=mat[0][0];
	for(i=0;i<max;i++)
	{
		for(j=0;j<max;j++)
		{
			if(mat[i][j]>largest)
			{
				largest=mat[i][j];
			}
		}
	}
	printf("\n\nThe largest element in the matrix is %d",largest);
}
