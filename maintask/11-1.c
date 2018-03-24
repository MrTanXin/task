#include <stdio.h>
#include <stdbool.h>
#include <math.h>
_Bool prime(int);
int main()
{
	int m;
	_Bool result;

	scanf("%d", &m);

	result = prime(m);
	if (result==true)
	{
		printf("%d是素数\n", m);
	}
	else
	{
		printf("%d不是素数\n", m);
	}
	return 0;
}

_Bool prime(int num)
{
	int i;
	for ( i = 2; i <= sqrt(num); i++)
	{
		if (num%i==0)
		{
			return false;
		}
	}
	return true;
}