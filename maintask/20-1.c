#include <stdio.h>
#include <string.h>
int main()
{
	int i;
	char a[10][99];
	char max[99];
	for ( i = 0; i < 10; i++)
	{
		printf("%d:", i);
		gets(a[i]);
	}
	strcpy(max, a[0]);
	for ( i = 1; i < 10; i++)
	{
		if (strcmp(max,a[i])<0)
		{
			strcpy(max, a[i]);
		}
	}
	puts(max);
	return 0;
}