#include <stdio.h>

int gcd(int, int);

int main()
{
	int m, n;
	scanf("%d,%d", &m, &n);
	printf("%d", gcd(m, n));
	return 0;
}

int gcd(int m, int n)
{
	int r;
	if (n==0)
	{
		r = m;
	}
	else
	{
		r = gcd(n, m%n);
	}
	return r;
}