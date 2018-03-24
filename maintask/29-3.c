#include <stdio.h>
#include <stdlib.h>
void fun(int *a, int n, int *odd, int *even);

int main()
{
	int i;
	int a[100], n = 100;
	int q = 0, o = 0;
	int *odd = &q;
	int *even = &o;
	for ( i = 0; i < 100; i++)
	{
		a[i] = rand() % 100;
	}

	fun(a, n, odd, even);
	
	printf("100个数字中奇数和 = %d,偶数和 = %d", q, o);
	return 0;
}

void fun(int *a, int n, int *odd, int *even)
{
	int i;
	for ( i = 0; i < n; i++)
	{
		if (a[i]%2==0)
		{
			*even += a[i];
		}
		else
		{
			*odd += a[i];
		}
	}
}