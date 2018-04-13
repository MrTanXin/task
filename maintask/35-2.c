#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char * deleteChSet(char *s1, char *s2);

int main()
{
	int i;
	char s1[] = "ABCDEFGHIJKLMN";
	char s2[] = "BDGHM";
	char *result = malloc(100 * sizeof(char));
	for ( i = 0; i < 100; i++)
	{
		result[i] = '\0';
	}
	
	strcpy(result, deleteChSet(s1, s2));
	puts(result);

	return 0;
}

char * deleteChSet(char *s1, char *s2)
{
	int i, count = 0;
	char result[100] = "\0";
	for ( i = 0; i < strlen(s1); i++)
	{
		if (check(s1[i], s2))
		{
			result[count++] = s1[i];
		}
	}

	return result;
}

int check(int a, char *s)
{
	int i;
	for ( i = 0; i < strlen(s); i++)
	{
		if (a==s[i])
		{
			return 0;
		}
	}
	return 1;
}