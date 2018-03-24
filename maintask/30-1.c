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
	}

	max_min_value(a);
	
	return 0;
}

void max_min_value(int *a)
{
	int max=a[0], min=a[0];
	int maxW = 0, minW = 0;
	int i;
	int temp;
	for ( i = 0; i < 10; i++)
	{
		if (max<a[i])
		{
			max = a[i];
			maxW = i;
		}
		if (min>a[i])
		{
			min = a[i];
			minW = i;
		}
	}
 
	temp = max;
	max = a[9];
	a[9] = temp;

	temp = min;
	min = a[0];
	a[0] = temp;

	for ( i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
}
