#include <stdio.h>
#include<string.h>
int main()
{
	float a[999];
	int i, n;
	float temp,min, max,sum = 0;
	for (i = 0; i < 999; i++)//´æ·Å
	{
		scanf("%f", &temp);
		if (temp == -1.0)
			break;
		a[i] = temp;
		sum += a[i];
	}
	n = i;//¸öÊý
	//printf("%d", n);
	max = min = a[0];
	for (i = 0; i < n; i++)
	{
		if (max < a[i])
			max = a[i];
		if (min > a[i])
			min = a[i];
	}
	sum = sum - max - min;
	printf("AVE = %f", sum*1.0 / (n-2));
	return 0;
}