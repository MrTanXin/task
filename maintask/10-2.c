#include <stdio.h>

int main()
{
	int n, d, i, j;
	int sum = 0;
	int temp = 0;
	printf("n:");
	scanf("%d", &n);
	printf("d:");
	scanf("%d", &d);
	
	for (i = 1; i <= n; i++)
	{
		temp = 0;
		for (j = 1; j <= i; j++)
		{
			temp = temp * 10 + d;
		}
		sum += temp;
	}
	printf("%d", sum);
	return 0;
}