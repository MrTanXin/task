#include <stdio.h>

int main()
{
	float x;
	int y;
	printf("x=");
	scanf("%f", &x);

	if (x<10)
	{
		y = 5;
	}
	if (x==10)
	{
		y = 0;
	}
	if (x>10)
	{
		y = -5;
	}

	printf("x=%f,y=%d", x, y);

	return 0;
}