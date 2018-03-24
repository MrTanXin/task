#include <stdio.h>
#include <stdbool.h>
_Bool rn(int);
int main()
{
	int year, inputDay;
	_Bool result;
	scanf("%d,%d", &year, &inputDay);
	result = rn(year);

	if (result==true)
	{
		if ((inputDay-=31)<=0)//1
		{
			printf("%d/1/%d\n", year, inputDay + 31);
			goto end;
		}
		if ((inputDay-=29)<=0)//2
		{
			printf("%d/2/%d\n", year, inputDay + 29);
			goto end;
		}
		if ((inputDay -= 31) <= 0)//3
		{
			printf("%d/3/%d\n", year, inputDay + 31);
			goto end;
		}
		if ((inputDay -= 30) <= 0)
		{
			printf("%d/4/%d\n", year, inputDay + 30);
			goto end;
		}
		if ((inputDay -= 31) <= 0)//5
		{
			printf("%d/5/%d\n", year, inputDay + 31);
			goto end;
		}
		if ((inputDay -= 30) <= 0)
		{
			printf("%d/6/%d\n", year, inputDay + 30);
			goto end;
		}
		if ((inputDay -= 31) <= 0)//7
		{
			printf("%d/7/%d\n", year, inputDay + 31);
			goto end;
		}
		if ((inputDay -= 31) <= 0)//8
		{
			printf("%d/8/%d\n", year, inputDay + 31);
			goto end;
		}
		if ((inputDay -= 30) <= 0)
		{
			printf("%d/9/%d\n", year, inputDay + 30);
			goto end;
		}
		if ((inputDay -= 31) <= 0)//10
		{
			printf("%d/10/%d\n", year, inputDay + 31);
			goto end;
		}
		if ((inputDay -= 30) <= 0)
		{
			printf("%d/11/%d\n", year, inputDay + 30);
			goto end;
		}
		if ((inputDay -= 31) <= 0)//12
		{
			printf("%d/12/%d\n", year, inputDay + 31);
			goto end;
		}
		goto err;
	}
	else
	{
		if ((inputDay -= 31) <= 0)//1
		{
			printf("%d/1/%d\n", year, inputDay + 31);
			goto end;
		}
		if ((inputDay -= 28) <= 0)//2
		{
			printf("%d/2/%d\n", year, inputDay + 28);
			goto end;
		}
		if ((inputDay -= 31) <= 0)//3
		{
			printf("%d/3/%d\n", year, inputDay + 31);
			goto end;
		}
		if ((inputDay -= 30) <= 0)
		{
			printf("%d/4/%d\n", year, inputDay + 30);
			goto end;
		}
		if ((inputDay -= 31) <= 0)//5
		{
			printf("%d/5/%d\n", year, inputDay + 31);
			goto end;
		}
		if ((inputDay -= 30) <= 0)
		{
			printf("%d/6/%d\n", year, inputDay + 30);
			goto end;
		}
		if ((inputDay -= 31) <= 0)//7
		{
			printf("%d/7/%d\n", year, inputDay + 31);
			goto end;
		}
		if ((inputDay -= 31) <= 0)//8
		{
			printf("%d/8/%d\n", year, inputDay + 31);
			goto end;
		}
		if ((inputDay -= 30) <= 0)
		{
			printf("%d/9/%d\n", year, inputDay + 30);
			goto end;
		}
		if ((inputDay -= 31) <= 0)//10
		{
			printf("%d/10/%d\n", year, inputDay + 31);
			goto end;
		}
		if ((inputDay -= 30) <= 0)
		{
			printf("%d/11/%d\n", year, inputDay + 30);
			goto end;
		}
		if ((inputDay -= 31) <= 0)//12
		{
			printf("%d/12/%d\n", year, inputDay + 31);
			goto end;
		}
		goto err;
	}
	err:
	printf("输入的日期有误\n");
	end:
	return 0;
}

_Bool rn(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		return true;
	}
	return false;
}