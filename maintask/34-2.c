#include <stdio.h>
#include <string.h>

void fun(char(*str)[5], int m);

int main()
{
	int i;
	char str[5][5] = {"ABCD","BCDE","CDEF","DEFG","DFGI"};
	int m = 5;

	fun(str, m);
	for ( i = 0; i < 5; i++)
	{
		puts(str[i]);
	}
	return 0;
}

void fun(char (*str)[5], int m)
{
	int i, j;
	char temp[5];
	for ( i = 0; i < 5-1; i++)
	{
		for ( j = 0; j < 5-1-i; j++)
		{
			if (strcmp(str[j],str[j+1])<0)
			{
				strcpy(temp, str[j]);
				strcpy(str[j], str[j + 1]);
				strcpy(str[j + 1], temp);
			}
		}
	}

}