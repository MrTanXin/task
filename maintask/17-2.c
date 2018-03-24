#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//#define lengthx 3
//#define lengthy 4
#define length 10
int arrayNum[length][length];// = { {9,80,205,40} ,{90,-60,96,1} ,{210,-3,101,89} };
_Bool check(int, int);
int main()
{
	int max;
	int maxx, maxy;
	srand((unsigned)time(NULL));
	int i, j;
	for (i = 0; i < length; i++)
	{
		for (j = 0; j < length; j++)
		{
			arrayNum[i][j] = rand();
			printf("%d ", arrayNum[i][j]);
		}
		printf("\n");
	}
	for ( i = 0; i < length; i++)
	{
		max = arrayNum[i][0];
		maxx = i;
		maxy = 0;
		for ( j = 0; j < length; j++)
		{
			if (max<arrayNum[i][j])
			{
				max = arrayNum[i][j];
				maxx = i;
				maxy = j;
			}
			
		}
		if (true == check(maxx, maxy))
		{
			printf("x=%d,y=%d,°°µã=%d", i, j, max);
		}
	}
	getchar();
	return 0;
}

_Bool check(int a, int b)
{
	int i;
	for ( i = 0; i < length; i++)
	{
		if (arrayNum[a][b]>arrayNum[i][b])
		{
			return false;
		}
	}
	return true;
}