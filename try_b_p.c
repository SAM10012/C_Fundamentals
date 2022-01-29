#include<conio.h>
#define N 100
void print_pattern(int n)
{
	int arr[2*n-1][2*n-1];
	int i,j,a,b;
	for(i=0;i<2*n-1;i++)
	{
		for(j=0;j<2*n-1;j++)
		{
			
			arr[i][j] = n;
			arr[j][i] = n;
			arr[j][2*n-1-1] = n;
			arr[2*n-1-1][j] = n;
		}
		
	}
	
	
	for(a=0;a<7;a++)
	{
		for(b=0;b<7;b++)
		{
			printf("%d ",arr[a][b]);
		}
		printf("\n");
	}
		
}

void main()
{
	int n,a,b;
	printf("\n Enter the number: ");
	scanf("%d",&n);
	
	while(n!=0)
	{
		int i=0,j=0;
		print_pattern(n);
		n--;
		i++;
		j++;
	}
	/*for(a=0;a<2*n-1;a++)
	{
		for(b=0;b<2*n-1;b++)
		{
			printf("%d ",arr[a][b]);
		}
		printf("\n");
	}*/
}
