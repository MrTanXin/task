#include <stdio.h>
int main()
{
	void fun1();
	fun1();
	return 0;
}

void fun1()
{
	int i,j;
	for ( i = 100; i < 999; i++)
	{
		for ( j = 2; j <=i/2 ; j++)
		{
			if (i%j==0)
			{
				break;
			}
		}
		if (j==(i/2+1))
		{
			printf("第一个三位素数是:%d", i);
			return;
		}
	}
}
