#include <stdio.h>
#include <stdlib.h>

int main()
{
	int h;
	float p_max;
	float *p = &p_max;
	int i, j;
	float score[6][5];
	srand((unsigned)time(NULL));

	for ( i = 0; i < 6; i++)
	{
		for ( j = 0; j < 4; j++)
		{
			score[i][j] = rand() % 41 + 60;
		}
	}

	for ( i = 0; i < 6; i++)
	{
		score[i][4] = score[i][0] + score[i][1] + score[i][2] + score[i][3];
	}

	h = findmax(score, p);

	for ( i = 0; i < 6; i++)
	{
		for ( j = 0; j < 5; j++)
		{
			printf("%.0f ", score[i][j]);
		}
		printf("\n");
	}

	printf("\n");
	printf("第%d行最大:%.0f", h,p_max);

}

int findmax(float s[][5], float *p)
{
	int i;
	*p = s[0][4];
	int h = 1;
	for ( i = 0; i < 6; i++)
	{
		if (*p < s[i][4])
		{
			*p = s[i][4];
			h = i + 1;
		}
	}

	return h;
}