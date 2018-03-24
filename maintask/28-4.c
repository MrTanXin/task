#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void chnum(char t[][20], int n, int b[]);
int allpairs(int b[], int n, int c[][2]);

int main()
{
	int b[5], n = 5;

	char s[5][20];
	int i, j;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 20; j++)
		{
			s[i][j] = rand() % 10 + 48;
		}
	}

	chnum(s, n, b);

}

void chnum(char t[][20], int n, int b[])
{
	int count = 0;
	int i, j;
	int temp = 0;
	int c[5][2];
	for (i = 0; i < n; i++)
	{
		temp = 0;
		for (j = 0; j < strlen(t[i]); j++)
		{
			temp = temp * 10 + j;
		}
		b[i] = temp;
	}

	count = allpairs(b, n, c);
	if (count==-1)
	{
		count = 0;
	}
	printf("count = %d", count);
}

int allpairs(int b[], int n, int c[][2])
{
	int count = 0;
	int sum = 0;
	int j, i;
	for (j = 0; j < n; j++)
	{
		sum = 0;
		for (i = 1; i <= b[j] / 2; i++)
		{
			if (b[j]%i == 0)
			{
				sum += i;
			}
		}

		if (sum == b[j+1])
		{
			c[count][0] = b[j];
			c[count++][1] = b[j + 1];
		}
	}
	
	return count;
}