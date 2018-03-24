#include <stdio.h>
#include <string.h>
int main()
{
	int count = 0;
	char source[99];
	char newarr[99]="\0";
	int m,i;
	printf("m:");
	scanf("%d", &m);
	getchar();
	printf("source Array:");
	gets(source);

	for ( i = 0; i < m; i++)
	{
		newarr[i] = source[i];
	}
	for ( i = m; i < strlen(source); i++)
	{
		source[count++] = source[i];
	}
	source[strlen(source) - m] = '\0';
	strcat(source, newarr);
	printf("new Array:");
	puts(source);
	return 0;
}