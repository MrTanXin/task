#include <stdio.h>
#include <string.h>
int main()
{
	int i, j;
	char t;
	char a[999];
	gets(a);
	for ( i = 0; i < strlen(a)-1; i++)
	{
		for (j = 0; j < strlen(a) - 1 - i; j++)
		{
			if (a[j]>a[j+1])
			{
				t = a[j];
			 	a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
	puts(a);
	return 0;
}