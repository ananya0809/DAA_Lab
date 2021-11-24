//Ananya Agrawal
//199303010

#include<stdio.h>
int binary_search(int a[],int low, int high, int key)
{
	if(low > high)
	{
		return -1;
	}
	else if ( low <= high)
	{
		int mid = low + (high - low)/2;
		if(a[mid] == key)
		{
			return mid;
		}
		if (a[mid] > key)
		{
			return binary_search(a,low,mid-1,key);
		}
		return binary_search(a,mid+1,high,key);
	}
}

int main()
{
	int i,j,n,p,key;
	printf("enter value of n\n");
	scanf("%d",&n);
	int A[n];
	//int A[6] = {15, 7, 3, 4, 22, 35};
	printf("enter values in array\n");
	for(i = 0; i < n; i++)
	{
		scanf("%d",&A[i]);
	}
	for (j = 1; j<= n-1; j++)
	{
		i = j-1;
		key = A[j];
	
	while (i>=0 && A[i]>=key)
	{
		A[i+1] = A[i];
		i = i-1;
		
	}
	A[i+1] = key;
	}
	printf("sorted array\n");
	for(p = 0; p <= n-1; p++)
	{
		printf("%d\n",A[p]);
	}
	printf("Enter a key to search: ");
	scanf("%d",&key);
	int search = binary_search(A,0,n-1,key);
	if (search != -1)
	{
		printf("Element found at %d index", search);
	}
	else {
		printf("Element not in array");
	}
	return 0;
}
