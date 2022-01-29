#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3],b[3][3],c[3][3]={0},i,j,k;
	printf("\nEnter the elements of matrix a: ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n b[%d][%d] = ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("\nMatrix a is: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n");
	}
	printf("\nMatrix b is: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d",b[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	for(k=0;k<3;k++)
	c[i][j]=c[i][j]+a[i][k]*b[k][j];
	printf("\n\nMatrix c is: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d",c[i][j]);
		}
		printf("\n");
	}
}
