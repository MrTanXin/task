#include<stdio.h>
#include <string.h>
void huiwen();
char a[999];
char newarr[999] = "\0";
int main()
{
	gets(a);
	huiwen();
	return 0;
}
void huiwen()
{
	int i;
	int count = 0;
	for ( i = strlen(a)-1; i >= 0 ; i--)
	{
		newarr[count++] = a[i];
	}
	if (strcmp(newarr, a) == 0)
	{
		printf("回文\n");
	}
	else
		printf("不回文\n");
}