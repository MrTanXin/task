#include <stdio.h>
#include <string.h>
void Recursive(char string[100], int num);
void NO_Recursive(char string[100], int num);

int main()
{
	int i;
	char string[100] = "\0";
	char string1[100] = "\0";
	int num;

	printf("num=");
	scanf("%d", &num);
	getchar();
	printf("string=");
	gets(string);
	strcpy(string1, string);

	Recursive(string, num);
	NO_Recursive(string1, num);

	return 0;
}

void Recursive(char string[100], int num)
{
	if (num == 0)
	{
		puts(string);
		return 0;
	}
	int i;
	char end = string[strlen(string) - 1];
	for (i = strlen(string) - 1; i >= 1; i--)
	{
		string[i] = string[i - 1];
	}
	string[0] = end;
	Recursive(string, num - 1);
}

void NO_Recursive(char string[100], int num)
{
	int i,j;
	char end;
	for (j = 0; j < num; j++)
	{
		end = string[strlen(string) - 1];
		for (i = strlen(string) - 1; i >= 1; i--)
		{
			string[i] = string[i - 1];
		}
		string[0] = end;
	}
	puts(string);
}