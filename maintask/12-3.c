#include <stdio.h>

int main()
{
	int i,j;
	int sum;
	
	for (i = 1; i < 1000; i++)
	{
		sum = 1;
		for ( j = 2; j <=i/2 ; j++)
		{
			if (i%j==0)
			{
				sum += j;
			}
			if (sum == i)
			{
				printf("%d 的因子是 1", i);
				for (j = 2; j <= i / 2; j++)
					if (i%j == 0) printf(",%d", j);
				printf("\n");
			}
		}
	}
	return 0;
}