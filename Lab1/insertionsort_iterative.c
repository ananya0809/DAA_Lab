//Ananya Agrawal
//199303010

#include<stdio.h>
int main()
{
	int i,j,p,key,n;
	printf("enter value of n\n");
	scanf("%d",&n);
	int A[n];
	//int A[6] = {15, 7, 3, 4, 22, 35};
	printf("enter values in array\n");
	for(p = 0; p <= n-1; p++)
	{
		scanf("%d",&A[p]);
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
	return 0;
	
}
