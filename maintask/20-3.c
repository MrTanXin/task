#include <stdio.h>
#include <string.h>

int main()
{
	int count = 0;
	int i;
	char s[999], t[999];
	for ( i = 0; i < 999; i++)
	{
		s[i] = t[i] = '\0';
	}
	gets(s);
	for ( i = 1; i < strlen(s); i+=2)
	{
		t[count++] = s[i];
	}
	puts(t);
	return 0;
}