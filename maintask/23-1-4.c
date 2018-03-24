#include <stdio.h>
int fun4(int begin, int end);
int main()
{
	int begin, end, count = 0;
	scanf("%d,%d", &begin, &end);
	count = fun4(begin, end);
	printf("count = %d", count);
	return 0;
}

int fun4(int begin, int end)
{
	int i, j, count = 0;
	for (i = begin; i <= end; i++)
	{
		for (j = 2; j <= i / 2; j++)
		{
			if (i%j == 0)
			{
				break;
			}
		}
		if (j == i / 2 + 1)
		{
			printf("%d\n", i);
			count++;
		}
	}
	return count;
}