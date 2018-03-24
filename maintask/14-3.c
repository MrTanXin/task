#include <stdio.h>

int main()
{
	int a[999];
	int i, temp, count, t;
	for (i = 0; i < 999; i++)
	{
		scanf("%d", &temp);
		if (temp == -1)
		{
			break;
		}
		a[i] = temp;
	}
	count = i;
	for (i = 0; i < count / 2; i++)
	{
		t = a[i];
		a[i] = a[count - 1 - i];
		a[count - 1 - i] = t;
	}

	for (i = 0; i < count; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}
