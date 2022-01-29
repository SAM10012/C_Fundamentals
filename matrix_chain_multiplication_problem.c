
#include <stdio.h>
#define MAX 9999999


int Matrix_chain_multiplication_algorithm(int p[], int n)
{

	int m[n-1][n-1];
	int s[n-1][n-1];

	int i, j, k, matrix_chain_length, no_of_multiplications,z=0;

	for (i = 1; i < n; i++)
		m[i][i] = 0;

	
	for (matrix_chain_length = 2; matrix_chain_length < n; matrix_chain_length++)
	 {
		for (i = 1; i < n - matrix_chain_length + 1; i++)
		{
			j = i + matrix_chain_length - 1;
			m[i][j] = MAX;
			for (k = i; k <= j - 1; k++)
			{
				
				no_of_multiplications = m[i][k] + m[k + 1][j]+ p[i - 1] * p[k] * p[j];
					
				if (no_of_multiplications < m[i][j])
				{
					m[i][j] = no_of_multiplications;
					s[i][j] = k;
				}
			}
		}
	}
	
	printf("\nThe s matrix is as follows: \n");
	for(i=1;i<n;i++)
	{
		for(j=1;j<n;j++)
		{
			
			if(i==j)
			printf("%d ",z);
			else if(j>i)
			printf("%d ",s[i][j]);
			else
			printf("  ");
			
		}
		printf("\n");
	}
    
    return m[1][n - 1];
	
}


void main()
{
	int arr[] = { 4, 10, 3, 12, 20, 7 };
	int size = sizeof(arr) / sizeof(arr[0]);

	printf("\n Minimum number of multiplications is %d.",Matrix_chain_multiplication_algorithm(arr, size));

	
    
}

