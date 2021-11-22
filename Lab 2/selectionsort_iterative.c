//Ananya Agrawal
//199303010

#include<stdio.h>
int main()
{
	int i,j,p,min,n;
	printf("enter value of n\n");
	scanf("%d",&n);
	int A[n];
	//int A[6] = {15, 7, 3, 4, 22, 35};
	printf("enter values in array\n");
	for(p = 0; p < n; p++)
	{
		scanf("%d",&A[p]);
	}
	for(i = 0; i<= n-2; i++)
	{
		min = i;
		for(j = i+1; j<=n-1; j++)
		{
			if(A[j] < A[min])
			{
				min = j;
			}
		}
		int temp;
		temp = A[i];
		A[i] = A[min];
		A[min] = temp;
	}
	printf("sorted array\n");
	for(p = 0; p < n; p++)
	{
		printf("%d\n",A[p]);
	}
	return 0;
}
