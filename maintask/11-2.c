#include <stdio.h>

int main()
{
	int i;
	int a, b, c;
	for ( i = 100; i <= 999; i++)
	{
		a = i % 10;
		b = i / 10 % 10;
		c = i / 100;

		if (a*a*a+b*b*b+c*c*c==i)
		{
			printf("%d是水仙花数\n", i);
		}
	}

	return 0;
}