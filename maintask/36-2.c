#include <stdio.h>
#include <math.h>

struct Item
{
	double coeff;
	int power;
};

int main()
{
	struct Item item1;

	printf("µ×Êý£¬ÃÝ:");
	scanf("%lf,%d", &item1.coeff, &item1.power);

	printf("%.2f", pow(item1.coeff, item1.power));

	return 0;
}