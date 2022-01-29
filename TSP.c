#include<stdio.h>
#include<conio.h>
#define MAX 15

int temp;
int cost = 0;
int next;

void main()
{
	int i,j,n,max,s,flag;
	int TSP[MAX][MAX];
	int status[MAX];
	int vertices[MAX];
	
	printf("\n Enter the no. of vertices: ");
	scanf("%d",&n);
	
	printf("\n Please enter the value of the vertices: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&vertices[i]);
	}
	
	printf("\n The value of the vertices are: ");
	for(i=0;i<n;i++)
	{
		printf("%d ",vertices[i]);
	}
	
	for(i=0;i<n;i++)
	{
		status[i] = 0;
	}
	
	printf("\n Enter the costs of the TSP: ");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\n TSP[%d][%d] = ",i,j);
			scanf("%d",&TSP[i][j]); 
		}
	}
	
	printf("\n The costs of the TSP are: \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{	
			printf(" %d",TSP[i][j]);
		}
		printf("\n");
	}
	
	printf("\n Enter the maximum cost in the TSP: ");
	scanf("%d",&max);
	
	printf("\n Enter the source vertex of the TSP: ");
	scanf("%d",&s);
	
	temp = max;
	for(j=0; j<n;j++)
	{
		if(TSP[s][j] != 0)
		{
		if(status[s] == 0)
		{
			if(TSP[s][j] < temp)
			{
				temp = TSP[s][j];
				next = j;
				status[s] = 1;
			}
		}
		}
	}
	cost = cost + temp;
	printf("\n .......cost after source = %d   next = %d",cost,next);
	
	
	for(i=0;i<n;i++)
	{
		if(i!=s)
		{
		temp = max;
		flag = 0;
		for(j=0;j<n;j++)
		{	
			if(j!=next && j!=s)
			{
			if(status[next] == 0)
			{
			if(TSP[next][j] < temp)
			{
				temp = TSP[next][j];
				flag = 1;	
				printf("\n %d",temp);
			}	
		
		}
	}
	}
		
		if(flag != 0)
		{
			cost = cost + temp;
			printf("\n %d", cost);
			status[next] = 1;
			next = j;
		}
		else if(flag == 0)
		{
			temp = 0;
			cost = cost + temp;
		}
	}
}
	
	cost = cost + TSP[next][s];
	printf("\n %d", cost);
	
	printf("\n Using Greedy Approach, the cost of the Travelling Salesman Problem is %d unit.",cost);
	
	
}
