#include <stdio.h>
#include <stdlib.h>

void max_min_value(int *a);

int main()
{
	int i;
	int a[10];
	for ( i = 0; i < 10; i++)
	{
		a[i] = rand() % 101;
		printf("%d ", a[i]);
	}
	printf("\n");
	max_min_value(a);
	
	return 0;
}

void max_min_value(int *a)
{
	int *max, *min, t, i;
	int maxW = 0, minW = 0;

	max = a;
	min = a;
	for (i = 0; i < 10; i++)
		if (*max < a[i])
		{
			max = &a[i];
			maxW = i;
		}
			

	for (i = 0; i < 10; i++)
		if (*min > a[i])
		{
			min = &a[i];
			minW = i;
		}
			

	t = a[minW];
	a[minW] = a[0];
	a[0] = t;

	t = a[maxW];
	a[maxW] = a[9];
	a[9] = t;

	for ( i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
}