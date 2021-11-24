//Ananya Agrawal
//199303010

#include<stdio.h>
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
