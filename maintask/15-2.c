#include <stdio.h>
#define N 10
int main()
{
	int tmp;
	int a[N];
	int i = 0, j = 0, k = 0;

	for ( i = 0; i < N; i++)
	{
		scanf("%d", &a[i]);
	}

	for (i = 0; i < N - 1; i++)
	{
		k = i;
		for (j = i + 1; j < N; j++)
		{
			if (a[k] > a[j])
			{
				k = j;
			}
		}
		if (k != i)
		{
			tmp = a[k];
			a[k] = a[i];
			a[i] = tmp;
		}
	}

	for ( i = 0; i < N; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}