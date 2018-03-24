#include <stdio.h>
void fun1();
int main()
{
	fun1();
	return 0;
}

void fun1()
{
	int i,j;
	for ( i = 100; i < 999; i++)
	{
		for ( j = 2; j <= i/2; j++)
		{
			if (i%j==0)
			{
				goto next;
			}
		}
		printf("%d", i);
		return;
	next:;
	}
}