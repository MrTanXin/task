#include <stdio.h>

int main()
{
	int n = 1.5, x = 4;
	printf("P(4,1.5) = %d", lrd(n, x));
	return 0;
}

int lrd(int n, int x)
{
	int re;
	if (n==0)
	{
		return 1;
	}
	if (n==1)
	{
		return x;
	}
	return ((2 * n - 1)*x*lrd(n - 1, x) - (n - 1)*lrd(n - 2, x)) / n;
}