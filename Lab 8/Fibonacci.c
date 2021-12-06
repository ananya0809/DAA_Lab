//Ananya Agrawal
//199303010

#include <stdio.h>
int main()
{
	int digit1 = 0, digit2 = 1, nextdigit, n, i;
	printf("Enter number of elements:\n");
	scanf("%d",&n);
	printf("%d %d ",digit1, digit2);
	for(i = 2; i < n; i++)
	{
		nextdigit = digit1 + digit2;
		printf("%d ",nextdigit);
		digit1 = digit2;
		digit2 = nextdigit;
	}
	return 0;
}
