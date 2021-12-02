//Ananya Agrawal
//199303010

#include <stdio.h>
#define INFINITY 9999
#define MAX 10

void Prims(int Graph[MAX][MAX], int n)
{
	int parent[MAX], cost[MAX], visited[MAX], start, i,j;
	for(i = 0 ; i < MAX; i++)
	{
		cost[i] = 9999;
		visited[i] = 0;
	}
	cost[0] = 0;
	parent[0] = -1;
	for(i = 0; i < MAX-1; i++)
	{
		start = mincost(cost,visited);
		visited[start] = 1;
	}
	for(j = 0; j < MAX; j++)
	{
		if(Graph[start][j] != INFINITY && visited[j] == 0 && Graph[start][j] < cost[j])
		{
			parent[j] = start;
			cost[j] = Graph[start][j];
		}
	}
}
int mincost(int cost[], int visited[])
{
	int min = 9999, index, i;
	for(i = 0; i < MAX; i++)
	{
		if(visited[i] == 0 && cost[i] < min)
		{
			min = visited[i];
			index = i;
		}
	}
	return index;
}
void MST(int parent[], int Graph[MAX][MAX])
{
	int i;
	printf("Edge\t Weight\n");
	for(i = 1; i < MAX; i++)
	{
		printf("%d - %d\t %d\n", parent[i], i, Graph[i][parent[i]]);
	}
}

int main() 
{
	int Graph[MAX][MAX], i, j, n;
	printf("Enter the number of vertices:\n");
	scanf("%d",&n);
	printf("Enter an adjacency matrix: \n");
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			scanf("%d",&Graph[i][j]);
		}
		printf("\n");
	}
	//printf("Enter the starting vertex: \n");
	//scanf("%d",&u);
	Prims(Graph, n);
	return 0;
}
