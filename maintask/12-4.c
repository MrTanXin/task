#include <stdio.h>
int jc(int);
int main()
{
	int i;
	int n;
	float s=1;
	printf("n:");
	scanf("%d", &n);
	printf("S=");
	for (i = 1; i <= n; i++)
	{
		s += 1.0 / jc(i);
	}
	printf("%f", s);
	return 0;
}

int jc(int num)
{
	int sum = 1,i;
	for ( i = 1; i <= num; i++)
	{
		sum *= i;
	}
	return sum;
}