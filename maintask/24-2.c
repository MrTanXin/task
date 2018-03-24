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
	int first=0,second=2;
	for ( i = begin; i <= end; i++)
	{
		if (isprime(i))
		{
			first = second;
			second = i;
			if (second-first==2)
			{
				printf("twin prime:%d and %d\n", first, second);
			}
		}
		
	}
}

int isprime(int p)
{
	int i;
	for ( i = 2; i <= p/2; i++)
	{
		if (p%i==0)
		{
			return 0;
		}
	}
	return 1;
}

