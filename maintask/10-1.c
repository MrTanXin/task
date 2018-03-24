#include <stdio.h>

int main()
{
	float tempNum = 0, sumNum = 0;
	int n,i,j;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		tempNum = 0;
		for (j = 1; j <= i; j++)
		{
			tempNum += 1.0 / j;
		}
		sumNum += tempNum;
	}
	printf("sum = %f", sumNum);
	return 0;
}