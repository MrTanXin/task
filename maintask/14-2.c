#include <stdio.h>
#include <stdlib.h>
int main()
{
	srand((unsigned)time(NULL));
	int a[10];
	int i, max, maxund;
	for ( i = 0; i < 10; i++)
	{
		a[i] = rand()%101;
		printf("%d ", a[i]);
	}
	printf("\n");
	max = a[i]; 
	maxund = 0;
	for ( i = 0; i < 10; i++)
	{
		if (max < a[i])
		{
			max = a[i];
			maxund = i;
		}
	}

	printf("MAX = %d,об╠Й = %d", max, maxund);
	return 0;
}