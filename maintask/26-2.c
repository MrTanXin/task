#include <stdio.h>
#include <string.h>
#include <ctype.h>

int ch = 0, num = 0, oth = 0;

int main()
{
	void count(char c[]);
	char c[999] = "\0";
	gets(c);
	count(c);
	printf("×Ö·û = %d,Êı×Ö = %d,ÆäËü = %d", ch, num, oth);
	return 0;
}

void count(char c[])
{
	static int i = 0;
	if (i==strlen(c))
	{
		return;
	}
	if (isalpha(c[i]))
	{
		i++;
		ch++;
		return count(c);
	}
	if (isalnum(c[i]))
	{
		i++;
		num++;
		return count(c);
	}
	i++;
	oth++;
	return count(c);
}