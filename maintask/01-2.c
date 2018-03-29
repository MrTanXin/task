#include <stdio.h>

int main()
{
	float m, n, f;
	printf("m,n:");
	scanf("%d,%d", &m, &n);
	printf("y=%d", (2 * (m + n) / (m*n)));
	return 0;
}