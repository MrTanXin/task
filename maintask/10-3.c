#include <stdio.h>

int main()
{
	float s = 0, temp;
	int i, j;
	int n;
	int sub = 0;
	printf("n:");
	scanf("%d", &n);

	for ( i = 1; i <= n; i++)
	{
		sub = 0;
		for ( j = 1; j <= i; j++)
		{
			sub += j;
		}
		temp = 1.0 / sub;
		s += temp;
	}
	printf("%d", s);

	return 0;
}