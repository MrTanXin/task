#include <stdio.h>

void sumFact(int n);

int main()
{
	int n;
	printf("n = ");
	scanf("%d", &n);
	sumFact(n);
	return 0;
}

void sumFact(int n)
{
	static int sum = 0;
	int tempSum = 1;
	int i = n;
	if (n==0)
	{
		printf("sum = %d", sum);
	}

	for (; i > 0; i--)
	{
		tempSum *= i;
	}

	sum += tempSum;
	return sumFact(n - 1);

}