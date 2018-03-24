#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
	int i, j;
	char a[3][85];
	int big, small, num, space, other;
	for ( i = 0; i < 3; i++)
	{
		gets(a[i]);
	}
	for ( i = 0; i < 3; i++)
	{
		big = small = num = space = other = 0;
		for ( j = 0; j < strlen(a[i]); j++)
		{
			switch (isalpha(a[i][j]))
			{
			case 1:
				big++;
				goto next;
			case 2:
				small++;
				goto next;
			}
			if (isdigit(a[i][j]))
			{
				num++;
				goto next;
			}
			if (a[i][j]==' ')
			{
				space++;
				goto next;
			}
			other++;

		next:;
		}
		printf("大写=%d,小写=%d,数字=%d,空格=%d,其他=%d\n", big, small, num, space, other);
	}
	return 0;
}