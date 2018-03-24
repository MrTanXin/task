#include <stdio.h>

int main()
{
	int i, count = 5, j;
	char a [5][9];
	for ( i = 0; i < 5; i++)
	{
		for ( j = 0; j < i; j++)
		{
			printf("\t");
		}
		for ( j = 0; j < 5; j++)
		{
			printf("*\t");
		}
		printf("\n\n\n");
	}
	return 0;
}