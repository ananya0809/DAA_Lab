//Ananya Agrawal
//199303010

#include<stdio.h>
void heapify(int A[], int n, int i)
{
	int largest = i;
	int left = 2*i;
	int right = (2*i)+1;
	if (left < n && A[left] > A[largest])
	{
		largest = left;
	}
	if (right < n && A[right] > A[largest])
	{
		largest = right;
	}
	if (largest != i)
	{
		int temp = A[i];
		A[i] = A[largest];
		A[largest] = temp;
		heapify (A, n, largest);
	}
}
void heapsort(int A[], int n)
{
	int i, temp;
	for (i = (n/2)-1; i >= 0; i--)
	{
		heapify(A,n,i);
	}
	for(i = n-1; i >= 0; i--)
	{
		temp = A[0];
		A[0] = A[i];
		A[i] = temp;
		heapify(A,i,0);
	}
}

int main()
{
	int p,n;
	printf("enter value of n\n");
	scanf("%d",&n);
	int A[n];
	//int A[6] = {15, 7, 3, 4, 22, 35};
	printf("enter values in array\n");
	for(p = 0; p <= n-1; p++)
	{
		scanf("%d",&A[p]);
	}
	heapsort(A,n);
	printf("sorted array\n");
	for(p = 0; p <= n-1; p++)
	{
		printf("%d\n",A[p]);
	}
	return 0;
}


