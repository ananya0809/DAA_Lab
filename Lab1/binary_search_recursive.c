//Ananya Agrawal
//199303010

#include<stdio.h>
#include<stdlib.h>
int binary_search(int a[],int low, int high, int key)
{
	if(low > high)
	{
		
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
