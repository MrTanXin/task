#include <stdio.h>

void twin_prime(int begin, int end);
int isprime(int p);

int main()
{
	int begin, end;
	scanf("%d,%d", &begin, &end);
	twin_prime(begin, end);
	return 0;
}

void twin_prime(int begin, int end)
{
	int i;
	for (i = begin; i <= end-2; i++)
	{
		if (isprime(i)&&isprime(i+2))
		{
			printf("twin prime:%d and %d\n", i, i+2);
		}

	}
}

int isprime(int p)
{
	int i;
	for (i = 2; i <= p / 2; i++)
	{
		if (p%i == 0)
		{
			return 0;
		}
	}
	return 1;
}

