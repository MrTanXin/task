#include <stdio.h>
#include <stdlib.h>
#define N 10

void fun(char(*a)[N], char *b, int m);

int main()
{
	int i;
	char string[3][N] = { "ABCDEFGHI","JKLMNOPQR","STUVWXYZA" };
	char *b = malloc(3 * 10 * sizeof(char));
	for (i = 0; i < 3 * 10; i++)
	{
		*(b + i) = '\0';
	}
	int m;
again:;
	printf("m=");
	scanf("%d", &m);
	if (m >= 9)
	{
		goto again;
	}
	fun(string, b, m);

	return 0;
}

void fun(char(*a)[N], char *b, int m)
{
	int i, j;
	int count = 0;
	for (j = 0; j < 3; j++)
	{
		for (i = 0; i < m; i++)
		{
			*(b + count++) = *(*(a + j) + i);
		}
	}

	puts(b);
}