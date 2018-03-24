#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
int sum = 0;
_Bool sign(char);
int change(char);
int main()
{
	_Bool flag;
	char a[10];
	gets(a);
	int i;
	if (true == sign(a[0]))
	{
		i = 1;
		flag = true;
	}
	else
	{
		i = 0;
		flag = false;
	}
	for (; i < strlen(a); i++)
	{
		if ((-1)== change(a[i]))
		{
			printf("ÊäÈëÓÐÎó");
			return 0;
		}
		sum = sum * 10 + change(a[i]);
	}
	if (flag)
	{
		sum = -sum;
	}
	printf("%d", sum);
	return 0;
}

_Bool sign(char c)
{
	if (c=='-')
	{
		//printf("-");
		return true;
	}
	return false;
}
int change(char c)
{
	
	if (isdigit(c))
	{
		return c-48;
	} 
	return -1;
}