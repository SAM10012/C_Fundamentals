#include<stdio.h>
#include<conio.h>
#define MAX 15


int cost[MAX][MAX];
int vertex_array[MAX];
int dist[MAX];
int predecessor[MAX];


void Relax(int u,int v,int n,int weight);
void Initial_Single_Source(int n,int s);
int Bellman_Ford(int n,int s);



void main()
{
	int n,s,i,j;
	int presence_of_cycle;
	
	//Taking the no. of vertices
	
	printf("\n Enter the no. of vertices in the graph: ");
	scanf("%d",&n);
	
	//Taking the value of the vertices
	
	printf("\n Enter the vertices of the graph: ");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&vertex_array[i]);
	}
	
	//Printing the value of the vertices
	
	printf("\n The vertices of the graph are : ");
	for(i=1;i<=n;i++)
	{
		printf("%d ",vertex_array[i]);
	}
	
	//Taking the value of the edges of the graph
	
	printf("\n Enter the cost of the edges of the graph: ");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("\n cost[%d][%d] = ",i,j);
			scanf("%d",&cost[i][j]);
		}
	}
	
	//Printing the value of the edges of the graph
	
	printf("\n The cost of the edges of the graph: \n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf(" %d ",cost[i][j]);
		}
		printf("\n");
	}
	
	//Taking the value of the source vertex
	
	printf("\n Enter the source vertex of the graph: ");
	scanf("%d",&s);
	
	//Whether a negative cycle is present in the graph or not
	
	presence_of_cycle = Bellman_Ford( n, s);
	
	//Printing the optimum distances of other vertices from the source vertex
	
	printf("\n The optimum distance array of the graph is : ");
	for(i=1;i<=n;i++)
	{
		printf("%d ",dist[i]);
	}
	
	//Printing the predecessor vertices of the vertices of the graph 
	
	printf("\n The predecessor array of the graph is : ");
	for(i=1;i<=n;i++)
	{
		printf("%d ",predecessor[i]);
	}
	
}



void Relax(int u,int v,int n,int weight)
{
	
	if(dist[v] > (dist[u] + weight))
	{
		dist[v] = (dist[u] + weight);
		predecessor[v] = u;	
	}
	
	
}


void Initial_Single_Source(int n,int s)
{
	int i;
	for(i=1;i<=n;i++)
	{
		dist[i] = 999;
		predecessor[i] = -1;
	}
	dist[s] = 0;
	
}


int Bellman_Ford(int n,int s)
{
	int i,j,k,wt;
	
	Initial_Single_Source(n,s);
	
	
	for(i=1;i<=n-1;i++)
	{
		for(j=1;j<=n;j++)
		{
			for(k=1;k<=n;k++)
			{
				if(cost[j][k] != 0)
				{
				wt = cost[j][k];
				Relax(j,k,n,wt);
				}
			}
		}
	}
	
	
		for(j=1;j<=n;j++)
		{
			for(k=1;k<=n;k++)
			{
				if(dist[j] < (dist[i] + cost[j][k]))
				return 0;
			}
		}
		return 1;
}
