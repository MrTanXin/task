#include <stdio.h>
#include <stdbool.h>
_Bool search(int);
int a[999], b[999], c[999];
_Bool result;
int i, temp, acount, bcount, ccount = 0;

int main()
{
	for (i = 0; i < 999; i++)
	{
		scanf("%d", &temp);
		if (temp == -1)
		{
			break;
		}
		a[i] = temp;
	}
	acount = i;
	
	for (i = 0; i < 999; i++)
	{
		scanf("%d", &temp);
		if (temp == -1)
		{
			break;
		}
		b[i] = temp;
	}
	bcount = i;
	for ( i = 0; i <acount; i++)
	{
		result = search(a[i]);
		if (result==true)
		{
			c[ccount] = a[i];
			ccount++;
		}
	}

	for ( i = 0; i < ccount; i++)
	{
		printf("%d ", c[i]);
	}
	return 0;
}

_Bool search(int  num)
{
	int i;
	for ( i = 0; i < bcount; i++)
	{
		if (b[i]==num)
		{
			return true;
		}
	}
	return false;
}