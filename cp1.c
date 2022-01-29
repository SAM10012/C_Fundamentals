#include<stdio.h>

int main()
{
	int T,K,N,A[N],temp,i,j;
	scanf("%d",&T);
	
	scanf("%d %d",&N,&K);
	for(i=0;i<N;i++)
	{
		scanf("%d",&A[i]);
	}
	
	for(j=0;j<K;j++)
	{
		temp = A[N-1];
		for(i=N-1;i>=1;i--)
		{
			A[i]=A[i-1];
		}
		A[0]=temp;
	}
	
	for(i=0;i<N;i++)
	{
		printf("%d ",A[i]);
	}
	
	return 0;
}
