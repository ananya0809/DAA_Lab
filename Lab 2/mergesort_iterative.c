//Ananya Agrawal
//199303010

#include<stdio.h>
void merge(int A[], int l, int mid, int h)
{
	int m = mid-l+1;
	int n = h-mid;
	int B[m], C[n];
	int i,j;
	
	for (i=0; i<m; i++)
	{
		B[i] = A[l+i];
	}
	for (j=0; j<n; j++)
	{
		C[j] = A[mid+1+j];
	}
	i = 0,j = 0;
	int k = l;
	while ( i < m && j < n)
	{
		if (B[i] <= C[j])
		{
			A[k] = B[i];
			i++;
		}
		else
		{
			A[k] = C[j];
			j++;
		}
		k++;
	}
	while (i<m)
	{
		A[k] = B[i];
		i++;
		k++;
	}
	while (j<n)
	{
		A[k] = C[j];
		j++;
		k++;
	}
}

void mergesort (int A[], int l, int h)
{
	if (l < h)
	{
		int mid = l+(h-l)/2;
		mergesort(A,l,mid);
		mergesort(A,mid+1,h);
		merge(A,l,mid,h);
	}
}
int main()
{
	int i,n;
	printf("enter value of n\n");
	scanf("%d",&n);
	int A[n];
	//int A[6] = {15, 7, 3, 4, 22, 35};
	printf("enter values in array\n");
	for(i = 0; i < n; i++)
	{
		scanf("%d",&A[i]);
	}
	mergesort(A,0,n-1);
	printf("sorted array\n");
	for(i = 0; i < n; i++)
	{
		printf("%d\n",A[i]);
	}
	return 0;
}
	
	
