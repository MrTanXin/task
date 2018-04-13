#include <stdio.h>
#include <stdlib.h>

void fun(char * s, char * n);

int main()
{
	char string[100] = "**ABCD***EFG***";
	char Newstr[100] = "\0";
	
	fun(string, Newstr);
	puts(Newstr);

	return 0;
}

void fun(char * s, char * n)
{
	char back[100] = "\0";
	int j, B_c = 0, i, N_c = 0;
	int char_flag = 0;
	for ( i = strlen(s) - 1; i >= 0; i--)
	{
		if (s[i]=='*')
		{
			*(back + B_c++) = '*';
		}
		if (s[i]!='*')
		{
			break;
		}
	}
	for ( i = 0; i < strlen(s)- B_c-1; i++)
	{	
		if (s[i]!='*'&&char_flag==0)
		{
			char_flag = 1;
		}
		if (s[i]=='*'&&char_flag==0)
		{
			n[N_c++] = s[i];
		}
		if (s[i]=='*'&&char_flag==1)
		{
			continue;
		}
		if (s[i] != '*'&&char_flag == 1)
		{
			n[N_c++] = s[i];
		}
	}
	strcat(n, back);
}