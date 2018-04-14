#include <stdio.h>

int main()
{
	float Box_long, Box_width, Box_high, Box_weight;

	printf("long(m),width(m),high(m),weight(kg)\n");
	scanf("%f,%f,%f,%f", &Box_long, &Box_width, &Box_high, &Box_weight);

	if (Box_high*Box_long*Box_width>1)
	{
		printf("≥¨π˝≥ﬂ¥Á");
		return 0;
	}

	if (Box_weight > 40)
	{
		printf("≥¨÷ÿ");
		return 0;
	}

	switch ((int)Box_weight/10)
	{
	case 0: 
		printf("%f", Box_weight*2.5 + 5);
		break;
	case 1: 
	case 2:
		printf("%f", Box_weight*2 + 5);
		break;
	case 3:
		printf("%f", Box_weight * 1.5 + 5);
		break;
	}

	return 0;
}