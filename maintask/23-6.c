#include <stdio.h>
#include <ctype.h>
int main()
{
	char c = 'A';
	void draw1(char c);
	void draw2(char c);
	void draw3(char c);
	void draw4(char c);
	void draw5(char c);
	draw1(c);
	printf("\n\n");
	draw2(c);
	printf("\n\n");
	draw3(c);
	printf("\n\n");
	draw4(c);
	return 0;
}

void draw1(char c)
{
	int i, j;
	for (i = 0; i < 4; i++)
	{
		for (j = 2 - i; j >= 0; j--)
		{
			printf(" ");
		}
		for (j = 2 * i + 1; j > 0; j--)
		{
			printf("%c", c);
		}
		c++;
		printf("\n");
	}
	c -= 2;
	for (i = 3; i > 0; i--)
	{
		for (j = 4 - i; j > 0; j--)
		{
			printf(" ");
		}
		for (j = 2 * i - 1; j > 0; j--)
		{
			printf("%c", c);
		}
		c--;
		printf("\n");
	}
}

void draw2(char c)
{
	int i, j;
	for (i = 0; i < 6; i++)
	{
		for (j = 5 - i; j > 0; j--)
		{
			printf(" ");
		}
		for (j = 2 * i + 1; j > 0; j--)
		{
			printf("%c", c);
			c++;
		}
		printf("\n");
		c = 'A';
	}
}

void draw3(char c)
{
	char str[7] = { 62,63,64,65,64,63,62 };
	int i, j;
	char newStr[8] = "\0";
	for (j = 0; j < 4; j++)
	{
		for (i = 0; i < 7; i++)
		{
			if (isalpha(str[i]) == 1)
			{
				newStr[i] = str[i];
			}
			else
			{
				newStr[i] = 32;
			}
		}
		puts(newStr);
		for (i = 0; i < 7; i++)
		{
			str[i] += 1;
		}
	}
	for (i = 0; i < 7; i++)
	{
		str[i] -= 2;
	}
	for (i = 3; i > 0; i--)
	{
		for (j = 0; j < 7; j++)
		{
			if (isalpha(str[j]) == 1)
			{
				newStr[j] = str[j];
			}
			else
			{
				newStr[j] = 32;
			}
		}
		puts(newStr);
		for (j = 0; j < 7; j++)
		{
			str[j] -= 1;
		}
	}
}

void draw4(char c)
{
	char stat = c;
	int i, j;
	for (j = 0; j < 7; j++)
	{
		for (i = 0; i < 7; i++)
		{
			printf("%c",c);
			c++;
			if (c=='H')
			{
				c = 'A';
			}
		}
		stat++;
		c = stat;
		printf("\n");
	}
	return 0;
}
