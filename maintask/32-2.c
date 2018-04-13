#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int change(char *source, int *Newstr);

int main()
{
	int i, j;
	char source[100] = "\0";
	int *Newstr = malloc(100 * sizeof(int));
	
	gets(source);
	*Newstr = 0;

	j = change(source, Newstr);
	
	for ( i = 0; i < j; i++)
	{
		printf("%d ", *(Newstr + i));
	}
	printf("\n%d¸ö", j);
	
	return 0;
}

int change(char *source, int *Newstr)
{
	int i, j = 0;
	int count,flag=0;

	for ( i = 0; i < strlen(source); i++)
	{
		if (isdigit(*(source+i)))
		{
			*(Newstr + j++) = *(source + i)-48;
		}
	}
	
	return j;
}