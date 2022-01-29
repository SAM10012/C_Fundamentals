#include<stdio.h>
#include<conio.h>
 
int a,b,u,v,n,i,j,edge_no=1;
int visited_node[10]={0},min,minimum_cost=0,edge_value[10][10];
 
void main()
{
	printf("\n Enter the number of nodes:");
	scanf("%d",&n);
	printf("\n Enter the adjacency matrix:\n");
 
	for(i=1;i<=n;i++)
 
	for(j=1;j<=n;j++)
 
	{
 
		scanf("%d",&edge_value[i][j]);
 
		if(edge_value[i][j]==0)
 
			edge_value[i][j]=999;
 
	}
 
	visited_node[1]=1;
 
	printf("\n");
    
    printf("\n The nodes included in the minimum spanning tree (MST) are as follows: ");
    
	while(edge_no < n)
	{
		for(i=1,min=999;i<=n;i++)
		for(j=1;j<=n;j++)
		if(edge_value[i][j]< min)
		if(visited_node[i]!=0)
		{
			min=edge_value[i][j];
			a=u=i;
			b=v=j;
		}
		
        
		if(visited_node[u]==0 || visited_node[v]==0)
		{
			printf("\n Edge %d:(%d -> %d) whose cost is :%d",edge_no++,a,b,min);
			minimum_cost+=min;
			visited_node[b]=1;
		}
		edge_value[a][b]=edge_value[b][a]=999;
	}
 
	printf("\n\n The required minimun cost is : %d units.\n",minimum_cost);
 
}
 
