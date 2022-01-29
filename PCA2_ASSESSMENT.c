#include<stdio.h>
#include<conio.h>
#define MAX 15

int temp;
int cost = 0;
int next;
int visited[MAX]; // For getting the salesman's path.
char array[8]={'A','B','C','D','E','F','G','H'};

void main()
{
	int i,j,n,max,s,flag,old,k=0;
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
		printf("%c ",array[vertices[i]]);
	}
	
	// Making the status of all vertices zero.
	
	for(i=0;i<n;i++)
	{
		status[i] = 0;
	}
	
	printf("\n\n Enter the costs of the TSP: ");
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
	
	// Calculating the least cost vertex from source 0.
	 
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
	visited[k] = next;
	k++;
	
	// Calculating the least cost vertices from every vertex and adding them to final cost.
	
	for(i=0;i<n;i++)
	{
		if(i!=s) // As least cost vertex from source is calculated separately.
		{
		temp = max;
		flag = 0;
		for(j=0;j<n;j++) // Finding the least cost for every vertex.
		{	
		
			if(j!=next && j!=s && TSP[next][j]!=0) // Making sure there is no self loop.
			{                   //and source is not visited before every other vertex is visited.
			if(status[j] == 0) // Whether the vertex is already visited.
			{
			if(TSP[next][j] < temp)
			{
				temp = TSP[next][j];
				flag = 1;	// Will help to know when every vertex is visited.
				old = j; // Will help in finding the next vertex.
				
				
			}	
		
		}
	}
	}
		
		if(flag == 1)
		{
			cost = cost + temp;
			status[next] = 1; // Already visited vertex.
			next = old; // Next vertex to visit.
			visited[k] = next;
			k++;
		}
		else if(flag == 0) // All the vertices are visited.
		{
			temp = 0;
			cost = cost + temp;
		}
	}
}
	
	//cost = cost + TSP[next][s];  Cost of returning to the source vertex from the last vertex. 

	printf("\n Using Greedy Approach, the minimum cost paid by the Newspaper Agent is %d unit.",cost);
	
	/*printf("\n\n And  %d ",s);
	for(k=0;k<n-1;k++)
	{
		printf("--> %d ",visited[k]);
	}
	printf(" is the Travelling Salesman's path.");
	*/
	
	printf("\n\n And  %c ",array[s]);
	for(k=0;k<n-1;k++)
	{
		printf("--> %c ",array[visited[k]]);
	}
	printf(" is the Newspaper Agent's path.");
	
}
