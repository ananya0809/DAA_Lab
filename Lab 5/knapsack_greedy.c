//Ananya Agrawal
//199303010

#include<stdio.h>
int maximum(float A[],int n)
{
	int i;
	float max = A[0];
	for(i=0;i<n;i++)
	{
		if(max < A[i])
		{
			max = A[i];
		}
	}
	
	printf("maximum ratio from array = %.2f",max);
	return i;
}
int main()
{
	int m;
	printf("enter weight of knapsack: ");
	scanf("%d",&m);
	int n;
	printf("enter number of items: ");
	scanf("%d",&n);
	int w[n],p[n],i;
	
	for (i=0;i<n;i++)
	{
		printf("enter the weight of item %d: ",i+1);
		scanf("%d",&w[i]);
		printf("enter the profit of item %d: ",i+1);
		scanf("%d",&p[i]);
	}
	float r[n];
	for (i=0;i<n;i++)
	{
		r[i] = ((float)p[i]/(float)w[i]);
		printf("the profit by weight ratio of item %d = %.2f\n", i+1, r[i]);
	}
	maximum(r,n);
	
	
}
