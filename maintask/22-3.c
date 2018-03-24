#include <stdio.h>
#include <string.h>
int main()
{
	int i, count = 0;
	char a[999]="\0";
	char t[999] = "\0";
	gets(a);
	for ( i = strlen(a) - 1; i >=0 ; i--)
	{
		t[count++] = a[i];
	}
	strcpy(a, t);
	puts(a);
	return 0;
}