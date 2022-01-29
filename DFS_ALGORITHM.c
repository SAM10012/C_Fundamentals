#include<stdio.h>
#include<conio.h>
#define MAX 15


int stack[MAX];
int top = -1;

int time = 0;
int n;


int adjacency_matrix[MAX][MAX];
int vertex_array[MAX];
int dist[MAX];
int predecessor[MAX];
int visited[MAX];
char color[MAX];


void DFS_VISIT(int );
void DFS_Algorithm(int [MAX][MAX],int n);

void main()
{
	int i,j;
	
	//Taking the no. of vertices
	
	printf("\n Enter the no. of vertices in the graph: ");
	scanf("%d",&n);
	
	//Taking the value of the vertices
	
	printf("\n Enter the vertices of the graph: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&vertex_array[i]);
	}
	
	//Printing the value of the vertices
	
	printf("\n The vertices of the graph are : ");
	for(i=0;i<n;i++)
	{
		printf("%d ",vertex_array[i]);
	}
	
	//Taking the value of the edges of the graph
	
	printf("\n Enter the adjacency matrix of the graph: ");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\n adjacency_matrix[%d][%d] = ",i,j);
			scanf("%d",&adjacency_matrix[i][j]);
		}
	}
	
	//Printing the value of the edges of the graph
	
	printf("\n The adjacency matrix of the graph is: \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf(" %d ",adjacency_matrix[i][j]);
		}
		printf("\n");
	}
	
	
    DFS_Algorithm(adjacency_matrix,n);
	
}

void DFS_VISIT(int u)
{
	int i,j,v;
	color[u] = 'G';
	time = time + 1;
	dist[u] = time;
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(adjacency_matrix[i][j] == 1)
			{
				top = top + 1;
				stack[top] = j;
			}	
		}
	}
		v = stack[top];
		top--;
		if(color[v] == 'W')
		{
			predecessor[v] = u;
			DFS_VISIT(v);
		}
		
		
		
		
	color[u] = 'B';
	time = time + 1;
	visited[u] = time;
	
	
	
	
}







void DFS_Algorithm(int adjacency_matrix[MAX][MAX],int n)
{
	int i,u;
	
	for(i=0;i<n;i++)
	{
		u = vertex_array[i];
		color[u] = 'W';
		predecessor[u] = -1;
	}
	
	
	for(i=0;i<n;i++)
	{
		u = vertex_array[i];
		
		if(color[u] == 'W')
		{
			DFS_VISIT(u);
		}
	}
	
	
	printf("\n The arrangement of nodes after applying DFS Algorithm is : ");
	for(i=0;i<n;i++)
	{
		printf(" %d",stack[i]);
	}
	
}





