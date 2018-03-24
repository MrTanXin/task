#include <stdio.h>
#include <stdlib.h>

int main()
{
	srand((unsigned)time(NULL));
	int i, j,t;
	int score[20];
	for ( i = 0; i < 20; i++)
	{
		score[i] = rand() % 101;
		printf("%d ", score[i]);
	}
	printf("\nÅÅÐòÇ°\nÅÅÐòºó\n");
	for (j = 0; j < 20 - 1; j++)
		for (i = 0; i < 20 - 1 - j; i++)
		{
			if (score[i] > score[i + 1])
			{
				t = score[i];
				score[i] = score[i + 1];
				score[i + 1] = t;
			}
		}


	for (i = 0; i < 20; i++)
	{
		printf("%d ", score[i]);
	}
	return 0;
}