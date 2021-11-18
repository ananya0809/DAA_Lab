//Ananya Agrawal
//199303010

#include<stdio.h>
#include<stdlib.h>
int binary_search(int a[],int n, int key)
{
	int low = 0, high = n-1;
	while(low <= high)
	{
		int mid = low + (high - low)/2;
	if(key == a[mid])
	{
		return mid;
	}
	else if(key < a[mid])
	{
		high = mid -1;
	}
	else if(key > a[mid])
	{
		low = mid +1;
	}
}
return -1;	
}
int main()
{
	int i,n,key;
	printf("enter value of n\n");
	scanf("%d",&n);
	int A[n];
	//int A[6] = {15, 7, 3, 4, 22, 35};
	printf("enter values in array\n");
	for(i = 0; i < n; i++)
	{
		scanf("%d",&A[i]);
	}
	printf("Enter a key to search: ");
	scanf("%d",&key);
	int search = binary_search(A,n,key);
	if (search != -1)
	{
		printf("Element found at %d location", search);
	}
	else {
		printf("Element not in array");
	}
	return 0;
}
