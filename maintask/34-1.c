#include <stdio.h>
#include <ctype.h>

int main()
{
	char month[12][4] = { "Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec" };
	char Userin[4];
	int result = -2;

	printf("input month TOP3 character,first is UPPER\n");
	printf("month = ");

	gets(Userin);
	result = match(month, Userin);
	if (result==-1)
	{
		printf("month is incorrect");
		return 0;
	}
	
	printf("%s", Userin);
	printf(" month is %d", result);
	
	return 0;
}

int match(char(*month)[4], char *source)
{
	int i;

	for ( i = 0; i < 12; i++)
	{
		if ( strcmp(month[i],source)==0 )
		{
			return i+1;
		}
	}

	return -1;
}