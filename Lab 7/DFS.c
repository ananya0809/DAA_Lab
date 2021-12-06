//Ananya Agrawal
//199303010

#include<stdio.h>
#define V 20

int Graph[V][V], completed[V], n;
int DFS(int i)
{
    int j;
	printf("\n %d", i);
    completed[i] = 1;
    for(j = 0; j < n; j++)
    {
	    if(!completed[j] && Graph[i][j] == 1)
        {
            DFS(j);
        }
    }
    return 0;
}
 
int main()
{
	int i, j;
	printf("Enter the number of vertices:\n");
	scanf("%d",&n);
	printf("Enter an adjacency matrix: \n");
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			scanf("%d",&Graph[i][j]);
		}
		
	}
   for(i = 0; i < n; i++)
	{
    	completed[i]=0;
    }
    printf("Depth First Search is\n");
 
    DFS(0);
 
    return 0;
}
