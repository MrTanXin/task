#include <stdio.h>
#include <string.h>

int main()
{
	char *a = "ABCDEFG";
	char *b = "ABCDEF";
	int p = cmp(a, b);

	printf("0x%p", p);

	return 0;
}

int cmp(char *a, char *b)
{
	int temp = &a;
	if (strlen(a)<strlen(b))
	{
		temp = &b;
	}
	return temp;
}