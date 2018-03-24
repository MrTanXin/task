#include <stdio.h>

int gcd(int, int);

int main()
{
	int m, n;
	int result;
	printf("m,n:");
	scanf("%d,%d", &m, &n);
	result = gcd(m, n);
	printf("gcd = %d", result);
	return 0;
}

int gcd(int m, int n)
{
	int r = m % n;
	while (r)
	{
		m = n;
		n = r;
		r = m % n;
	}
	return n;
}