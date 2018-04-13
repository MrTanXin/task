#include <stdio.h>
#define N 5

void fun(int(*p)[N], int m, int *b);

int main()
{
	int i;
	int s[6][N] = {
		{1,2,3,4,5},
		{6,7,8,9,0},
		{2,3,4,5,6},
		{7,8,9,0,1},
		{3,4,5,6,7},
		{8,9,0,1,2},
	};
	int b[30] = { 0 };

	fun(s, 6, b);
	for ( i = 0; i < 30; i++)
	{
		printf("%d ", b[i]);
	}

	return 0;
}

void fun(int(*p)[N], int m, int *b)
{
	int i, j, c = 0;
	for ( i = 0; i < 6; i++)
	{
		for ( j = 0; j < N; j++)
		{
			b[c++] = *(*(p + i) + j);
		}
	}
}