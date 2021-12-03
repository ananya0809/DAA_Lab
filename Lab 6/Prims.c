//Ananya Agrawal
//199303010

#include <stdio.h>
#define V 5

int mincost(int cost[], int visited[])
{
	int min = 9999, index, i;
	for(i = 0; i < V; i++)
	{
		if(visited[i] == 0 && cost[i] < min)
		{
			min = visited[i];
			index = i;
		}
	}
	return index;
}

void MST(int parent[], int Graph[V][V])
{
	int i;
	printf("Edge\t Weight\n");
	for(i = 1; i < V; i++)
	{
		printf("%d - %d\t %d\n", parent[i], i, Graph[i][parent[i]]);
	}
}

void Prims(int Graph[V][V])
{
	int parent[V], cost[V], visited[V], start, i,j;
	for(i = 0 ; i < V; i++)
	{
		cost[i] = 9999;
		visited[i] = 0;
	}
	cost[0] = 0;
	parent[0] = -1;
	for(i = 0; i < V-1; i++)
	{
		start = mincost(cost,visited);
		visited[start] = 1;
		for(j = 0; j < V; j++)
		{
			if(Graph[start][j] != 0 && visited[j] == 0 && Graph[start][j] < cost[j])
			{
				parent[j] = start;
				cost[j] = Graph[start][j];
			}
		}
	}
	MST(parent, Graph);
}

int main() 
{
//	int Graph[MAX][MAX], i, j, n;
//	int i, j;
//	printf("Enter the number of vertices:\n");
//	scanf("%d",&n);
//	n = 5;
	
//	printf("Enter an adjacency matrix: \n");
//	for(i = 0; i < n; i++)
//	{
//		for(j = 0; j < n; j++)
//		{
//			scanf("%d",&Graph[i][j]);
//		}
//		printf("\n");
//	}

	int Graph[V][V] = {
		{0, 9, 75, 0, 0},
		{9, 0, 95, 19, 42},
		{75, 95, 0, 51, 66},
		{0, 19, 51, 0, 31},
		{0, 42,66, 31, 0}
	};
	//printf("Enter the starting vertex: \n");
	//scanf("%d",&u);
	Prims(Graph);
	return 0;
}
