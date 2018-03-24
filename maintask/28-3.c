#include <stdio.h>

void change(double sci[][3], int n);
void sort(double sci[][3], int n);

int main()
{
	double sci[5][3] =
	{
		{2.034,5},
		{0.461,-2},
		{4.32,3},
		{3.14,0},
		{0.717,-3},
	};
	int n = 5;
	change(sci, n);
	return 0;
}

void change(double sci[][3], int n)
{
	int i, j;
	double temp;
	for ( i = 0; i < n; i++)
	{
		temp = sci[i][0];
		if (sci[i][1]>0)
		{
			for ( j = sci[i][1]; j > 0; j--)
			{
				temp *= 10;
			}
		}
		if (sci[i][1]<0)
		{
			for ( j = sci[i][1]; j < 0; j++)
			{
				temp /= 10;
			}
		}
		sci[i][2] = temp;
	}
	for ( i = 0; i < n; i++)
	{
		printf("%lf\n", sci[i][2]);
	}
	printf("\n");
	sort(sci, n);

	
}

void sort(double sci[][3], int n)
{
	int i, j;
	double temp;
	for (j = 0; j < n - 1; j++)
		for (i = 0; i < n - 1 - j; i++)
		{
			if (sci[i][2] < sci[i + 1][2])
			{
				temp = sci[i][2];
				sci[i][2] = sci[i + 1][2];
				sci[i + 1][2] = temp;

				temp = sci[i][0];
				sci[i][0] = sci[i + 1][0];
				sci[i + 1][0] = temp;

				temp = sci[i][1];
				sci[i][1] = sci[i + 1][1];
				sci[i + 1][1] = temp;
			}
		}

	for ( i = 0; i < n; i++)
	{
		for ( j = 0; j < 3; j++)
		{
			printf("%lf\t", sci[i][j]);
		}
		printf("\n");
	}
}