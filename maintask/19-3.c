#include <stdio.h>
#include <string.h>

int main()
{
	int i, j;
	char t;
	char a[999];
	char newArr[999]="\0";
	char back;
	gets(a);
	newArr[0] = a[0];
	back = a[strlen(a) - 1];
	for ( i = 1; i < strlen(a); i++)
	{
		a[i - 1] = a[i];
	}
	a[strlen(a) - 2] = '\0';
	for ( i = 0; i < strlen(a)-1; i++)
	{
		for ( j = 0; j < strlen(a) - 1-i; j++)
		{
			if (a[j]<a[j+1])
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
	strcat(newArr, a);
	newArr[strlen(newArr)] = back;
	puts(newArr);
	return 0;
}