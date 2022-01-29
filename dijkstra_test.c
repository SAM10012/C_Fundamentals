#include<stdio.h>
#include<conio.h>
#define MAX 15


struct priority_queue
{
	int vertex_name;
	int priority;
};
struct priority_queue arr[MAX];


int cost[MAX][MAX];
int vertex_array[MAX];
int dist[MAX];
int predecessor[MAX];
int visited[MAX];


void Relax(int u,int v,int n,int weight);
void Initial_Single_Source(int n,int s);
void Dijkstras_algorithm(int n,int s);



void main()
{
	int n,s,i,j;
	
	struct priority_queue temp;
	
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
	
	printf("\n Enter the cost of the edges of the graph: ");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\n cost[%d][%d] = ",vertex_array[i],vertex_array[j]);
			scanf("%d",&cost[vertex_array[i]][vertex_array[j]]);
		}
	}
	
	//Printing the value of the edges of the graph
	
	printf("\n The cost of the edges of the graph: \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf(" %d ",cost[vertex_array[i]][vertex_array[j]]);
		}
		printf("\n");
	}
	
	
    //Taking the value of the source vertex
	
	printf("\n Enter the source vertex of the graph: ");
	scanf("%d",&s);
	
	
	
	for(i=0;i<n;i++)
	{
		arr[i].vertex_name = vertex_array[i];
		arr[i].priority = cost[s][vertex_array[i]];
	}
	
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i].priority>arr[j].priority)
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	
	
	
	Dijkstras_algorithm(n, s);
	
     
	//Printing the optimum distances of other vertices from the source vertex
	
	printf("\n The optimum distance array of the graph is : ");
	for(i=0;i<n;i++)
	{
		printf("%d ",dist[vertex_array[i]]);
	}
		
	for(i=1;i<n;i++)
	{
	printf("\n\n The distance of %d from '0' is %d unit.",vertex_array[i],dist[vertex_array[i]]);
	}

	
	//Printing the predecessor vertices of the vertices of the graph 
	
	printf("\n\n The predecessor array of the graph is : ");
	for(i=0;i<n;i++)
	{
		printf("%d ",predecessor[vertex_array[i]]);
	}
	
}



void Relax(int u,int v,int n,int weight)
{
	
	if(dist[v] > (dist[u] + weight))
	{
		dist[v] = (dist[u] + weight);
		predecessor[vertex_array[v]] = u;	
	}
	
	
}


void Initial_Single_Source(int n,int s)
{
	int i;
	for(i=0;i<n;i++)
	{
		dist[vertex_array[i]]= 9999;
		predecessor[vertex_array[i]] = -1;
	}
	dist[s] = 0;

}


Dijkstras_algorithm(int n,int s)
{
	int i,j,k,wt,u;
	
	Initial_Single_Source(n,s);
	
	for(i=0;i<n;i++)
	{
		visited[i] = -1;
	}
	
	for(i=0;i<n;i++)
	{
		u = arr[i].vertex_name;
		visited[i] = u;
		for(j=0;j<n;j++)
		{
			if(cost[arr[i].vertex_name][vertex_array[j]] != 0)
			{
				wt = cost[arr[i].vertex_name][vertex_array[j]];
				
				Relax(arr[i].vertex_name,vertex_array[j],n,wt);
				
			}
		}
	}
	
}
