#include <stdio.h>
#include <math.h>

int main()
{
	int num;
again:;
	scanf("%d", &num);
	if (num>=1000)
	{
		goto again;
	}

	printf("%.0f", sqrt(num));
	return 0;
}