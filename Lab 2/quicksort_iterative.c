//Ananya Agrawal
//199303010

#include<stdio.h>
char partition(int A[], int l, int h)
{
	int pivote = A[l];
	int i = l, j = h, temp;
	do
	{
		do
		{
			i++;
		}while(A[i] <= pivote);
		do
		{
			j--;
		}while(A[j] > pivote);
		if(i<j)
		{
			temp = A[i];
			A[i] = A[j];
			A[j] = temp;
		}
	}while(i<j);
	temp = A[l];
	A[l] = A[j];
	A[j] = temp;
	return j;
}
void quicksort(int A, int l, int h)
{
	int j;
	if(l<h)
	{
		j = partition(A,l,h);
		quicksort(A,l,j);
		quicksort(A,j+1,h);
	}
}
int main()
{
	int p,n,l,h;
	printf("enter value of n\n");
	scanf("%d",&n);
	int A[n];
	//int A[6] = {15, 7, 3, 4, 22, 35};
	printf("enter values in array\n");
	for(p = 0; p <= n-1; p++)
	{
		scanf("%d",&A[p]);
	}
	l = 0;
	h = n;
	quicksort(A,l,h);
	printf("sorted array\n");
	for(p = 0; p <= n-1; p++)
	{
		printf("%d\n",A[p]);
	}
	return 0;
}

