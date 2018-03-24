#include <stdio.h>

int main()
{
	int n, p, result;
	scanf("%d,%d", &n, &p);
	int change(int, int);
	result = change(n, p);
	printf("%d", result);
	return 0;
}

int change(int n, int p)
{
	int ans;
	int count = 1;
	int result = 0;
	while (n>0)
	{
		ans = n % p;
		n /= p;
		result += count * ans;
		count *= 10;
	}
	return result;
}