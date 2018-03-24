#include <stdio.h>
int a[10];
void paixu(int a[],int n);
int main()
{
	int i;
	for ( i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	paixu(a,10);
	return 0;
}
void paixu(int a[],int n)
{
	int i, j, temp;
	for (j = 0; j < n - 1; j++)
		for (i = 0; i < n - 1 - j; i++)
		{
			if (a[i] > a[i + 1])
			{
				temp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = temp;
			}
		}
	for ( i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}