#include <stdio.h>
#include <string.h>

int main()
{
	char string[1000] = "\0";
	int count;
	
	gets(string);
	count = fun(string);
	printf("count = %d", count);

	return 0;
}

int fun(char *s)
{
	int count = 0;
	int flag = 0;
	int i, j;
	for ( i = 0; i < strlen(s); i++)
	{
		if (s[i]!=' '&&flag==0)
		{
			flag++;
			count++;
		}
		if (s[i]==' '&&flag==1)
		{
			flag = 0;
		}
	}
	return count;
}