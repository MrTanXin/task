#include <stdio.h>
int main()
{
	int a, b;
	int sum;
	int z, x, c, v;
	scanf("%d", &a);
	scanf("%d", &b);
	z = a / 10;
	x = a % 10;
	c = b / 10;
	v = b % 10;
	sum = x * 1000 + v * 100 + z * 10 + c;
	printf("%d\n", sum);
	return 0;
}