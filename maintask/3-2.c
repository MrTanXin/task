#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	int i;
	char c[999] = "\0";
	gets(c);
	for ( i = 0; i < strlen(c); i++)
	{
		if (isalpha(c[i])==2)
		{
			c[i] = toupper(c[i]);
			continue;
		}
		if (isalpha(c[i])==1)
		{
			c[i] = tolower(c[i]);
			continue;
		}
	}
	puts(c);
	return 0;
}