#include <stdio.h>
int fun3();
int main()
{
	int num = fun3();
	printf("prime = %d\n", num);
	return 0;
}

int fun3()
{
	int i, j;
	for ( i = 100; i <= 999; i++)
	{
		for ( j = 2; j <= i/2; j++)
		{
			if (i%j==0)
			{
				break;
			}
		}
		if (j == i/2+1)
		{
			return i;
		}
	}
}