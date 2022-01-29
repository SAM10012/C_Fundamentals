#include<stdio.h>
void main()
{
	int array[20][20],row,col,i,j,maximum;
	printf("Enter total number of rows of the matrix:\n");
	scanf("%d",&row);
	printf("Enter total number of coloumns of the matrix:\n");
	scanf("%d",&col);
	printf("Enter the elements of the matrix : ");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			scanf("%d",&array[i][j]);
	}
	printf("The matrix is:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			printf("%d\t",array[i][j]);
		printf("\n");
	}
	for(i=0;i<col;i++)
	{
		maximum=array[0][i];
		for(j=0;j<row;j++)
		{
			if(maximum<array[j][i])
				maximum=array[j][i];
		}
		printf("Maximum element of %d column of the matrix is: %d\n",i+1,maximum);
	}
}

