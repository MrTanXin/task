#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
int main()
{
	_Bool space = true;
	int i;
	char a[999];
	gets(a);
	int word = 0;
	for ( i = 0; i < strlen(a); i++)
	{
		if ((i==0&&(isalpha(a[i]!=0)))||( (isalpha(a[i]) != 0)&&space==true))
		{
			word++;
			space = false;
		}
		if (a[i]==' ')
		{
			space = true;
		}
	}
	printf("%d", word);
	return 0;
}