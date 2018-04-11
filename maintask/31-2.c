#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print(int a[][4], int flag);
void find_no_pass(int score[][4]);
void sort(int a[][4]);

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
	sort(score);
	return 0;
}

void find_no_pass(int score[][4])
{
	printf("NO_PASS\n");
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
	int temp[4];
	int i, j;
	int  *change;
	int exchange;
	int t[5] = {0,0,0,0,0};
	for ( i = 0; i < 5; i++)
	{
		for ( j = 0; j < 4; j++)
		{
			t[i] += a[i][j];
		}
	}

	for (i = 0; i < 5 - 1; i++)
		for (j = 0; j < 5 - 1 - i; j++)
		{
			if (t[j] < t[j + 1])
			{
				memcpy(temp,a[j],sizeof(temp));
				memcpy(a[j], a[j + 1], sizeof(temp));
				memcpy(a[j + 1], temp, sizeof(temp));

				exchange = t[j];
				t[j] = t[j + 1];
				t[j + 1] = exchange;
			}
		}

	for ( i = 0; i < 5; i++)
	{
		for ( j = 0; j < 4; j++)
		{
			printf("%d ", a[i][j]);
			
		}
		printf("%d", t[i]);
		printf("\n");
	}
}