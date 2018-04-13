#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int times(char *s, char *t);
void create_temp(char *temp, char *s, int i, int count);

int main()
{
	char *s = "ABCDEFABCGHIJKABC";
	char *t = "ABC";
	int count = times(s, t);

	printf("s = ");
	puts(s);
	printf("t = ");
	puts(t);
	printf("count = %d", count);

	return 0;
}

int times(char *s, char *t)
{
	int i, count = 0;
	char temp[100] = "\0";

	for ( i = 0; i < strlen(s); i++)
	{
		if (s[i]==t[0])
		{
			create_temp(temp, s, i, strlen(t));
			if (strcmp(temp,t))
			{
				count++;
			}
		}
	}

	return count;
}

void create_temp(char *temp, char *s,int i,int count)
{
	int j, n = 0;
	for ( j = i; j < count; j++)
	{
		temp[n++] = s[i];
	}
}