#include <stdio.h>

void fun(char str[], char c);

int main()
{
	char str[999]=  "\0";
	char c;
	printf("str=");
	gets(str);
	printf("c=");
	c = getchar();
	fun(str, c);
	return 0;
}

void fun(char str[], char c)
{
	int i,k;
	for ( i = 0; i < strlen(str); i++)
	{
		if (str[i]==c)
		{
			k = i;
			while (k<strlen(str))
			{
				str[k] = str[k + 1];
				k++;
			}
			i--;
		}
		
	}
	puts(str);
}