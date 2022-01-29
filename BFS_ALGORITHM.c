#include<stdio.h>
#include<conio.h>
#define MAX 15


int queue[MAX];
int front = -1;
int rear = -1;


int adj[MAX][MAX];
int vertex_array[MAX];
int dist[MAX];
int predecessor[MAX];
int visited[MAX];
char color[MAX];

char actual[MAX] = {'A','B','C','D','E','F','G','H'};

void BFS_Algorithm(int [MAX][MAX],int s,int n);

void main()
{
	int n,s,i,j;
	
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
			printf("\n adj[%d][%d] = ",i,j);
			scanf("%d",&adj[i][j]);
		}
	}
	
	//Printing the value of the edges of the graph
	
	printf("\n The adjacency matrix of the graph is: \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf(" %d ",adj[i][j]);
		}
		printf("\n");
	}
	
	
    //Taking the value of the source vertex
	
	printf("\n Enter the source vertex of the graph: ");
	scanf("%d",&s);
	
    BFS_Algorithm(adj,s,n);
	
}


void BFS_Algorithm(int adj[MAX][MAX],int s,int n)
{
	int i,j,u,v,k=-1,r;
	
	for(i=0;i<n;i++)
	{
		u = vertex_array[i];
		color[u] = 'W';
		dist[u] = 9999;
		predecessor[u] = -1;
	}
	color[s] = 'G';
	dist[s] = 0;
	predecessor[s] = -1;
	
	if(rear == -1  &&  front == -1)
	{
		rear++;
		front++;
	}
	
	queue[rear] = s;
	
	for(r=0;r<n;r++)
	{
		u = queue[front];
		front++;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if( adj[u][j]== 1)
				{
					v = j;
					if(color[v] == 'W')
					{
						color[v] = 'G';
						dist[v] = dist[u] + 1;
						predecessor[v] = u;
						rear++;
						queue[rear] = v;
					}	
				}
			}
			
		}
		color[u] = 'B';
		visited[k+1] = u;
	}
	
	printf("\n The arrangement of the nodes after applying BFS algorithm is: ");
	for(k=0;k<n;k++)
	{
		printf("%d ",queue[k]);
	}
	
	printf("\n The arrangement of the alphabetic nodes after applying BFS algorithm is: ");
	for(k=0;k<n;k++)
	{
		printf("%c ",actual[queue[k]]);
	}
	
}





