#include <stdio.h>

int main()
{
	int min;
	void fun2(int);
	scanf("%d", &min);
	fun2(min);
	return 0;
}

void fun2(int min)
{
	int i, j;
	for (i = min - 1; i >= 2; i--)
	{
		for (j = 2; j <= i / 2; j++)
			if (i%j == 0)
			{
				break;
			}
		if (j == i / 2 + 1)
		{
			printf("%d", i);
		}
	}
}