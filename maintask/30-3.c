#include <stdio.h>
int ysf(int, int);
int main()
{
	int count, pos;
	int result;
	scanf("%d,%d", &count, &pos);
	result = ysf(count, pos);
	printf("%d", result);
}

int ysf(int count ,int pos)
{
	if (count==1)
	{
		return 0;
	}
	return ((ysf(count - 1, pos)+ pos )% count);
}