#include <stdio.h>
#include <math.h>
int main()
{
	int n,i;
	float tempNum = 0, sumNum = 0;
	float pi;
	scanf("%d", &n);
	for ( i = 1; i <= n; i++)
	{
		tempNum = 1 / (i*i);
		sumNum += tempNum;
	}
	pi = sqrt(6 * sumNum);
	printf("%f", pi);
	return 0;
}