#include <stdio.h>

int main()
{
	float r, h;
	const float pi = 3.14;

	printf("r,h:");
	scanf("%f,%f", &r, &h);
	printf("s=%.3f", pi*r*r);
	printf("v=%.3f", pi*r*r*h);

	return 0;
}