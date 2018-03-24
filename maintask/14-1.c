#include <stdio.h>

int main()
{
	int insert=8;
	int a[11] = { 1,2,3,4,5,6,7,9,10,11 };
	int i;
	for (i = 9; a[i]>insert ; i--)
	{
		a[i + 1] = a[i];
	}
	a[i + 1] = insert;
	
	for ( i = 0; i < 11; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}