#include <stdio.h>
#include <string.h>
#define N 100

char * fun(char(*sq)[N], int m);

int main()
{
	int i;
	char string[5][N] = { "\0","\0","\0","\0","\0" };
	char *max;
	for ( i = 0; i < 5; i++)
	{
		gets(string[i]);
	}

	max= fun(string, 5);
	printf("\nmaxString = ");
	puts(max);
	printf("address = 0x%p", max);

	return 0;
}

char * fun(char(*sq)[N], int m)
{
	int i;
	char *p = &sq[0];
	char maxString[N] = "\0";
	int maxCount = strlen(sq[0]);
	int c;
	strcpy(maxString, sq[0]);
	for ( i = 0; i < m; i++)
	{
		c = strlen(sq[i]);
		if ((c-maxCount)>0)
		{
			strcpy(maxString, sq[i]);
			maxCount = strlen(sq[i]);
			p = &sq[i];
		}
	}
	return p;
}