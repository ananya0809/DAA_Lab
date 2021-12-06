//Ananya Agrawal
//199303010

#include<stdio.h>
#define V 20

int Graph[V][V], q[V], visited[V], n, i, j, f = 0, r = -1;

void BFS(int v)
{
	for(i = 1; i <= n; i++)
	{
		if(Graph[v][i] && !visited[i])
		{
			q[++r] = i;
		}
	}
	if(f <= r)
	{
		visited[q[f]] = 1;
		BFS(q[f++]);
	}
}

int main()
{
	int v;
	printf("Enter the number of vertices:\n");
	scanf("%d",&n);
	for(i = 1; i <= n; i++)
	{
		q[i] = 0;
		visited[i] = 0;
	}
	printf("Enter an adjacency matrix: \n");
	for(i = 1; i <= n; i++)
	{
		for(j = 1; j <= n; j++)
		{
			scanf("%d",&Graph[i][j]);
		}
		
	}
	printf("Enter the starting vertex: \n");
	scanf("%d",&v);
	BFS(v);
	printf("The nodes that will be covered are:\n");
	for(i = 1; i <= n; i++)
	{
		if(visited[i])
		{
			printf("%d\t", i);
		}
		else
		{
			printf("Node unreachable");
			break;
		}
	}
}

