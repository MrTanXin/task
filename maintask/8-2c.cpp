#include <stdio.h>
#include <math.h>
int main()
{
	int i=100;
	int a, b, c;
	do
	{
		a = i % 10;
		b = i / 10 % 10;
		c = i / 100;
		if ((a*a*a+b*b*b+c*c*c) == 1099)
		{
			printf("%d ", i);
		}
		i++;
	} while (i<1000);
	return 0;
}