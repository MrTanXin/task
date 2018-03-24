#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	srand((unsigned)time(NULL));
	int i;
	int Array[10];
	int max=30, min=100, sum = 0;
	for (i = 0; i < 10; i++)
	{
		Array[i] = rand() % 71 + 30;
		sum += Array[i];
		printf("%d  ", Array[i]);

		if (Array[i] < min)
			min = Array[i];
		if (Array[i] > max)
			max = Array[i];
	}

	printf("\nMAX = %d , MIN = %d , AVE = %f", max, min, sum / 10.0);
	return 0;
}