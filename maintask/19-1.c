#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
	int i;
	char a[999];
	gets(a);
	for (i = 0; i < strlen(a); i++)
	{
		if (isalpha(a[i]))
		{
			if (a[i] == 'z' || a[i] == 'Z')
			{
				a[i] -= 25;
				break;
			}
			a[i] += 1;
		}
	}
	puts(a);
	return 0;
}