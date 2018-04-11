#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void change(char *source, char *Newstr);

int main()
{
	int i;
	char *source = "A1B2C3D4E5F6";
	char *Newstr = malloc(100 * sizeof(char));
	
	for ( i = 0; i < 100; i++)
	{
		*(Newstr + i) = '\0';
	}

	change(source, Newstr);
	puts(Newstr);
	free(Newstr);

	return 0;
}

void change(char *source, char *Newstr)
{
	int i, j = 0;
	for ( i = 0; i < strlen(source); i++)
	{
		if (isdigit(*(source+i)))
		{
			*(Newstr + j++) = *(source + i);
		}
	}
}