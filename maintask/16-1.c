#include <stdio.h>
#include <stdlib.h>
int main()
{
	srand((unsigned)time(NULL));
	int a[3][4];
	int i, j;
	int min, minundx,minundy;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			a[i][j] = rand();
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}

	min = a[0][0];
	minundx = 0;
	minundy = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (min>a[i][j])
			{
				min = a[i][j];
				minundx = i;
				minundy = j;
			}
		}
	}

	printf("x=%d y=%d min = %d\n", minundx, minundy, min);
	return 0;
}