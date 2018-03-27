#include <stdio.h>

int main()
{
	float y, m, n;
	printf("m,n:");
	scanf("%f,%f", &m, &n);
	printf("y=%.2f",(2*(m+n)/(m*n)));
	return 0;
}