//Ananya Agrawal
//199303010

#include <stdio.h>

int binomial(int n, int r)
{
	if(r > n)
	{
		return 0;
	}
	if(r == 0 || r ==n)
	{
		return 1;
	}
	return binomial(n - 1, r - 1) + binomial(n - 1, r);
}

int main()
{
	int n, r;
	printf("Enter a value for n & r:\n");
	scanf("%d %d",&n, &r);
	binomial(n,r);
	printf("value of C(%d, %d) is %d ", n, r,binomial(n, r));
	return 0;
}
