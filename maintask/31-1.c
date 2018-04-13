#include <stdio.h>
#define N 3

void exchange_arr(int(*string)[N]);
void print(int a[][N]);
void exchange(int string[][N]);

int main()
{
	int i, j;
	int string[N][N] = { 1,2,3,4,5,6,7,8,9 };
	int string1[N][N] = { 1,2,3,4,5,6,7,8,9 };

	print(string);
	exchange_arr(string);
	exchange(string1);

	return 0;
}

void exchange_arr(int (*string)[N])
{
	int i, j;
	int temp;
	for ( i = 0; i < N; i++)
	{
		for ( j = i; j < N; j++)
		{
			temp = *(*(string + i) + j);
			*(*(string + i) + j) = *(*(string + j) + i);
			*(*(string + j) + i) = temp;
		}
	}
	print(string);
}

void print(int a[][N])
{
	int i, j;

	for (i = 0; i < N; i++)
	{
		for (j = 0; j <N; j++)
		{
			printf("%d   ", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void exchange(int a[][N])
{
	int i, j;
	int *temp = a[0][0];
	for ( i = 0; i < N; i++)
	{
		for ( j = i; j < N; j++)
		{
			temp = a[i][j];
			a[i][j] = a[j][i];
			a[j][i] = temp;
		}
	}
	print(a);
}
