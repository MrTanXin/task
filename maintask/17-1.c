#include <stdio.h>
#include <stdlib.h>
#define length 4
int main()
{
	int a[4][4], b[4][4], c[4][4];
	int i, j;
	int temp;
	printf("A:\n");
	srand((unsigned)time(NULL));
	for ( i = 0; i < length; i++)
	{
		for ( j = 0; j < length; j++)
		{
			a[i][j] = rand() % 41 + 30;
			b[i][j] = rand() % 36 + 101;
		}
	}
	for ( i = 0; i < length; i++)
	{
		for ( j = 0; j < length; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	printf("\nB:\n");
	for (i = 0; i < length; i++)
	{
		for (j = 0; j < length; j++)
		{
			printf("%d ", b[i][j]);
			c[i][j] = a[i][j] + b[i][j];
		}
		printf("\n");
	}
	printf("\nC:\n");
	for (i = 0; i < length; i++)
	{
		for (j = 0; j < length; j++)
		{
			printf("%d ", c[i][j]);
		}
		printf("\n");
	}
	printf("\n×ªÖÃºó\n");
	for (i = 0; i < length; i++)
	{
		for (j = i; j < length; j++)
		{
			temp = a[i][j];
			a[i][j] = a[j][i];
			a[j][i] = temp;
		}
	}
	for (i = 0; i < length; i++)
	{
		for (j = 0; j < length; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}