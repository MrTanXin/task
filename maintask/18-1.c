#include <stdio.h>
#include <stdlib.h>

int check(int);
int a[10];
int main()
{
	srand((unsigned)time(NULL));
	int i;
	for ( i = 0; i <10 ; i++)
	{
		a[i] = rand() % 10;
		printf("%d ", a[i]);
	}
	printf("\n单次出现的：");
	for ( i = 0; i < 10; i++)
	{
		if (1==check(a[i]))
		{
			printf("%d ", a[i]);
		}
	}
	return 0;
}

int check(int num)
{
	int count = 0;
	int i;
	for ( i = 0; i < 10; i++)
	{
		if (num == a[i])
			count++;
	}
	return count;
}