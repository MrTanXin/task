#include <stdio.h>
#include <stdbool.h>

int days(int y, int m, int d);
_Bool Isloopyear(int n);

int main()
{
	int day;
	int y, m, d;
	printf("year,month,day:");
	scanf("%d,%d,%d", &y, &m, &d);

	if (m>0&&m<13)
	{
		day = days(y, m, d);
	}
	else
	{
		printf("月份错误");
	}
	printf("%d", day);
	return 0;
}

int days(int y, int m, int d)
{
	int day = 0;
	int i;
	int year[12] = { 31,27,31,30,31,30,31,31,30,31,30,31 };

	if (Isloopyear(y))
	{
		year[1] = 28;
	}

	if (year[m-1]>=d)
	{
		for ( i = m-2; i >= 0; i--)
		{
			if (i>=0)
			{
				day += year[i];
			}	
		}
		day += d;
	}
	else
	{
		printf("日期错误");
	}
	return day;
}

_Bool Isloopyear(int n)
{
	if (n % 400 == 0 || (n % 4 == 0 && n % 100 != 0))
	{
		return true;
	}
	else
	{
		return false;
	}
}

