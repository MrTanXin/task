#include <stdio.h>

int main()
{
	int arrayNum[20] = { 0,1 };
	int i;
	for (i = 2; i < 20; i++)
	{
		arrayNum[i] = arrayNum[i - 1] + arrayNum[i - 2];
	}
	for (i = 0; i < 20; i++)
	{
		if (i!=0&&i%5==0)
		{
			printf("\n");
		}
		printf("%d\t", arrayNum[i]);
	}
	return 0;
}