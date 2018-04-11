#include <stdio.h>
#include <math.h>

void root(double a, double b, double(*f));

int main()
{
	double begin = 0, end = 3.14, answer;
	double *result;
	result = &answer;
	root(begin, end, result);
	printf("%f", *result);
}

void root(double a, double b, double(*f))
{
	if (b<1e-6)
	{
		return;
	}
	*f = a + b / 2;
	if (cos(a)<0&&cos(*f)>0)
	{
		b = *f;
		root(a, b, f);
	}
}