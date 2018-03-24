#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	printf("%d", path(n));
	return 0;
}

int path(int n)
{
	if (n==1)
	{
		return 0;
	}
	if (n==2)
	{
		return 1;
	}
	if (n%2==0)
	{
		return 3;
	}
	return 2;
}