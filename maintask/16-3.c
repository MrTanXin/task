#include <stdio.h>
#include <stdlib.h>
int main()
{
	srand((unsigned)time(NULL));
	int a[99][99];
	int N, i, j, sum = 0;
again:
	scanf("%d", &N);
	if (N < 2)
		goto again;
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			a[i][j] = rand()%10;
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	for (i = 0; i < N; i++)
	{
		sum += a[0][i];
		sum += a[N - 1][i];
	}
	for (i = 0; i < N; i++)
	{
		sum += a[i][0];
		sum += a[i][N - 1];
	}
	sum -= (a[0][0] + a[N - 1][N - 1] + a[0][N - 1] + a[N - 1][0]);
	printf("%f", 1.0*sum/((N-1)*4));
	return 0;
}