#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Recursive_reverser(char *Oldstr,char *Newstr,int i);
void No_Recursive_reverser(char *Oldstr, char *Newstr);

int main()
{
	char string[27] = "\0";
	char Newstr[27] = "\0";
	char Newstr1[27] = "\0";
	Newstr[26] = '\0';
	Newstr1[26] = '\0';

	gets(string);
	
	Recursive_reverser(string,Newstr, strlen(string));
	puts(Newstr);
	free(Newstr);

	No_Recursive_reverser(string, Newstr1);
	puts(Newstr1);
	free(Newstr1);
	return 0;
}

void Recursive_reverser(char *Oldstr, char *Newstr,int i)
{
	i--;
	if (i==-1)
	{
		return 0;
	}
	static int j = 0;
	Newstr[j++] = Oldstr[i];
	Recursive_reverser(Oldstr, Newstr,i);
}

void No_Recursive_reverser(char *Oldstr, char *Newstr)
{
	int i, j = 0;
	int count = strlen(Oldstr);
	for (i = count - 1; i >= 0; i--)
	{
		Newstr[j++] = Oldstr[i];
	}
}