#include <stdio.h>
#include <string.h>
int main()
{
	int i, count = 0;
	char str1[30];// = "FirstString¡ª¡ª";
	char str2[30];// = "SecondString";
	gets(str1);
	gets(str2);
	for ( i = strlen(str1); ; i++,count++)
	{
		if (str2[count]!='\0')
		{
			str1[i] = str2[count];
		}
		else
		{
			break;
		}
	}
	puts(str1);
	return 0;
}