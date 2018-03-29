#include <stdio.h>
#include <string.h>
int main()
{
	int numCount, spaceCount, engCount, otherCount, i = 0;
	numCount = spaceCount = engCount = otherCount = 0;
	char c[999];
	gets_s(c, 999);
	while (i < strlen(c))
	{
		if (c[i] >= '0'&&c[i] <= '9')
		{
			numCount++;
		}
		else if ((c[i] >= 'a' && c[i] <= 'z')||(c[i] >='A' &&c[i] <= 'Z'))
		{
			engCount++;
		}
		else if (c[i] == ' ')
		{
			spaceCount++;
		}
		else
		{
			otherCount++;
		}
		++i;
	}
	printf("数字%d个，英文%d个，空格%d个，其他字符%d个", numCount, engCount, spaceCount, otherCount);
	return 0;
}