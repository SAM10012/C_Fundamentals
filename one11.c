#include<stdio.h>
void main()
{
	int array[20][20],a,i,j,add=0;
	printf("Enter total number of rows and coloumns of the matrix:\n");
	scanf("%d",&a);
	printf("Enter the elements of the matrix:\n");
	for(i=0;i<a;i++)
	{
		for(j=0;j<a;j++)
			scanf("%d",&array[i][j]);
	}
	printf("The required matrix is:\n");
	for(i=0;i<a;i++)
	{
		for(j=0;j<a;j++)
			printf("%d\t",array[i][j]);
		printf("\n");
	}
	for(i=0;i<a;i++)
		add=add+array[i][i];
	printf("The sum of the elements of the major diagonal of the matrix is:%d",add);
}

