#include <stdio.h>
#include <stdlib.h>
#define M 4
#define N 3


int main()
{
	srand((unsigned)time(NULL));
	int dou[M][N];
	int one[M*N];
	int i, j;
	int count = 0;
	for ( i = 0; i < M; i++)
	{
		for ( j = 0; j < N; j++)
		{
			dou[i][j] = rand();
			printf("%d ", dou[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < N; j++)
		{
			one[count++] = dou[i][j];
		}
	}
	for ( i = 0; i < M*N; i++)
	{
		printf("%d ", one[i]);
	}
	return 0;
}