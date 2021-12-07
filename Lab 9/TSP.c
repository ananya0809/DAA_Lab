//Ananya Agrawal
//199303010

#include<stdio.h>
#define V 20
#define INFINITY 9999

int Graph[V][V], visited[V], n, cost = 0;

void mincost(int node)
{
	int i, nextnode;
	visited[node] = 1;
	printf("%d -> ",node+1);
	nextnode = smallest(node);
	if(nextnode == INFINITY)
	{
		nextnode = 0;
		printf("%d", nextnode+1);
		cost = cost + Graph[node][nextnode];
		return;
	}
	mincost(nextnode);
}

int smallest(int source)
{
	int i, maxcost = INFINITY, min = INFINITY, distmin;
	for(i = 0; i < n; i++)
	{
		if(Graph[source][i] != 0 && visited[i] == 0)
		{
			if(Graph[source][i] + Graph[i][source] < min)
			{
				min = Graph[i][0] + Graph[source][i];
				distmin = Graph[source][i];
				maxcost = i;
			}
		}
	}
	if(min != INFINITY)
	{
		cost = cost + distmin;
	}
	return maxcost;
}

int main()
{
	int i, j;
	printf("Enter the number of nodes to visit:\n");
	scanf("%d",&n);
	printf("Enter an adjacency matrix: \n");
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			scanf("%d",&Graph[i][j]);
		}
		visited[i] = 0;
	}
	printf("The path followed is:\n");
	mincost(0);
	printf("\nminimum cost of travelling = %d", cost);
}
