#include <stdio.h>
#include <string.h>

void fun(char *s, char *t);

int main()
{
	char *s = "QAZWSXEDCRFVTGBYHNUJMIKOLP";
	char t[26] = "\0";

	fun(s, t);
	puts(t);

	return 0;
}

void fun(char *s, char *t)
{
	int i, j = 0;
	for ( i = 0; i < strlen(s); i++)
	{
		if (i%2==1||s[i]%2==0)
		{
			t[j++] = s[i];
		}
	}
}