#include <stdio.h>
#include <string.h>
int main()
{
	int i, j;
	char a[3][99];
	char temp[99];
	for ( i= 0; i < 3; i++)
	{
		gets(a[i]);
	}
	for ( i = 0; i < 2; i++)
	{
		for ( j = 0; j < 2-i; j++)
		{
			if (strcmp(a[j],a[j+1])>0)
			{
				strcpy(temp, a[j]);
				strcpy(a[j], a[j + 1]);
				strcpy(a[j + 1], temp);
			}
		}
	}
	printf("\n");
	for ( i = 0; i <3; i++)
	{
		puts(a[i]);
	}
	return 0;
}