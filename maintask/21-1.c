#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
	int max;
	int i, j;
	int t = 0;
	char string[3][99];
	int stringCount[3];
	char newar[999] = "\0";
	for ( i = 0; i < 3; i++)
	{
		gets(string[i]);
	}
	for ( i = 0; i < 3; i++)
	{
		stringCount[i] = strlen(string[i]);
	}
	max = stringCount[0];
	for ( i = 0; i < 3; i++)
	{
		if (max<stringCount[i])
		{
			max = stringCount[i];
		}
	}
	for ( i = 0; i < 3; i++)
	{
		if (stringCount[i]==max)
		{
			printf("\n");

			for ( j = 0; j < max; j++)
			{
				if (isdigit(string[i][j]))
				{
					newar[t++] = ' ';
					newar[t++] = string[i][j];
				}
				else
					newar[t++] = string[i][j];
			}

			break;
		}
	}
	puts(newar);
	return 0;
}