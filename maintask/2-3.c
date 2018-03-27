#include <stdio.h>
#include <ctype.h>

int main()
{
	int c;
again:;
	scanf("%d", &c);
	if (isalpha(c)==1|| isalpha(c) == 2)
	{
		printf("%d = %c,%d = %c\n", c, c, c + 1, c + 1);
	}
	else
	{
		goto again;
	}
	return 0;
}