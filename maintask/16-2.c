#include <stdio.h>
#include <stdlib.h>
int main()
{
	srand((unsigned)time(NULL));
	int a[4][4];
	int i, j, sum = 0;
	for (i = 0; i < 4; i++)
	{
		for ( j = 0; j < 4; j++)
		{
			a[i][j] = rand();
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	for ( i = 0; i < 4; i++)
	{
		sum += (a[i][i] + a[i][3 - i]);
	}
	printf("%d\n", sum);
	return 0;
}