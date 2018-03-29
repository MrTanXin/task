#include <stdio.h>

int main()
{
	int i=1;
	float a, b, c, d, e, f, g;
	float scoreAvg = 0, scoreSum = 0;
	do
	{
		scanf("%f,%f,%f,%f,%f,%f,%f", &a, &b, &c, &d, &e, &f, &g);
		scoreSum = a + b + c + d + e + f + g;
		scoreAvg = scoreSum / 7;
		printf("SUM = %f , AVER = %f", scoreSum, scoreAvg);
		i++;
	} while (i<=5);
	return 0;
}