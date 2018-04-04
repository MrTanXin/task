#include <stdio.h>
#include <stdlib.h>

void print(int a[][4], int flag);
void find_no_pass(int score[][4]);

int main()
{
	int i, j;
	int score[5][4];
	for ( i = 0; i < 5; i++)
	{
		for ( j = 0; j < 4; j++)
		{
			score[i][j] = rand() % 101;
			printf("%d  ", score[i][j]);
		}
		printf("\n");
	}

	find_no_pass(score);

	return 0;
}

void find_no_pass(int score[][4])
{
	int i, j;
	int mark=0;
	for ( i = 0; i < 5; i++)
	{
		mark = 0;
		for ( j = 0; j < 4; j++)
		{
			if (score[i][j]<60)
			{
				print(score, i); 
				mark++;
			}
			if (mark == 1)
			{
				break;
			}
		}
	}
}

void print(int a[][4],int flag)
{
	printf("ID:%d ³É¼¨£º%d,%d,%d,%d\n", flag, a[flag][0], a[flag][1], a[flag][2], a[flag][3]);
}

void sort(int a[][4])
{
	int i, j;
	int temp, *change;
	int t[5] = {0,0,0,0,0};
	for ( i = 0; i < 5; i++)
	{
		for ( j = 0; j < 4; j++)
		{
			t[i] += a[i][j];
		}
	}

	for (j = 0; j < 5 - 1; j++)
		for (i = 0; i < 5 - 1 - j; i++)
		{
			if (t[i] > t[i + 1])
			{
				temp = t[i];
				t[i] = t[i + 1];
				t[i + 1] = temp;





			}
		}
}