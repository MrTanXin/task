#include <stdio.h>

void fact(int, int);

int main()
{
	int x, n;
	scanf("%d,%d", &x, &n);
	fact(x, n);
	
	return 0;
}

void fact(int x, int n)
{
	static int sum = 0;
	if (n==0)
	{
		printf("%d", sum);
		return 0;
	}	
	sum += x * n;
	fact(x, n - 1);
}