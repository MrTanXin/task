#include <stdio.h>

int main()
{
	int num;
	scanf("%d", &num);
	if (num%15==0)
	{
		printf("%d可以被3和5整除", num);
	}
	else
	{
		printf("%d不可以被3和5整除", num);
	}
	return 0;
}