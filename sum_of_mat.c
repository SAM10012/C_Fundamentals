/*SUM OF TWO MATRICES*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3],b[3][3],c[3][3],i,j;

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter the element of matrix a[%d][%d]:\n",i,j);
					scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter the elements of matrix b[%d][%d]:\n",i,j);
						scanf("%d",&b[i][j]);
		}
	}
	printf("\nMatrix a is:\n");
	for(i=0;i<3;i++)
			{
			for(j=0;j<3;j++)
		{
				printf("%d\t",a[i][j]);
			}
			printf("\n");
			}
	
		printf("\nMatrix b is:\n");
		for(i=0;i<3;i++)
			{
			for(j=0;j<3;j++)
		{
				printf("%d\t",b[i][j]);
			}
			printf("\n");
			}
			printf("The matrix c is:\n");
			for(i=0;i<3;i++)
			{
			for(j=0;j<3;j++)
			{
				c[i][j]=a[i][j]+b[i][j];
				printf("%d\t",c[i][j]);
			}
			printf("\n");
		}
				
	}
