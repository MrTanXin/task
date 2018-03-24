#include <stdio.h>
#define N 8


int check2(int adj1, int mid, int adj2)
{
	if (adj1==mid&&mid==adj2)
	{
		return 1;
	}
	return 0;
}

void check1(int m[][N])//
{
	int check(int, int, int);
	int i, j;
	int maxh, maxl, minh, minl;
	for ( i = 1; i < 6; i++)
	{
		for ( j = 1; j < 6; j++)
		{
			minl = minh = maxh = maxl = m[i][j];
			if (minl > m[i - 1][j])
				minl = m[i - 1][j];
			if (minl > m[i + 1][j])
				minl = m[i + 1][j];

			if (minh < m[i - 1][j])
				minh = m[i - 1][j];
			if (minh < m[i + 1][j])
				minh = m[i + 1][j];

			if (maxh < m[i][j + 1])
				maxh = m[i][j + 1];
			if (maxh < m[i][j - 1])
				maxh = m[i][j - 1];

			if (maxl > m[i][j - 1])
				maxl = m[i][j - 1];
			if (maxl > m[i][j + 1])
				maxl = m[i][j + 1];
			
			if (check2(maxl,m[i][j],minh)||check2(maxh,m[i][j],minl))
			{
				printf("%d行%d列是鞍点：%d\n",i+1,j+1, m[i][j]);
			}
		}
	}
}

int main()
{
	int m[N][N] = {
		{0,3,5,7,11,13,17,19},
		{1,2,3,9,16,17,21,18},
		{3,5,4,14,22,19,26,15},
		{5,11,9,6,16,15,23,12},
		{9,12,8,7,8,9,10,11},
		{7,6,15,14,13,10,9,10},
		{13,4,7,24,20,18,12,12},
		{15,10,9,8,25,19,16,14}
	};

	check1(m);

	return 0;
}