#include <stdio.h>
#include <string.h>

int main()
{
	int i, j, count = 0;
	char a[999];
	char temp[999]="\0";
	gets(a);
	for ( i = 0; i < strlen(a); i++)
	{
		if (a[i]!='*')
		{
			temp[count++] = a[i];
		}
	}
	strcpy(a, temp);
	puts(a);
	return 0;
}