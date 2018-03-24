#include <stdio.h>

void fun(float *m, float *n, float *k);
void swap(float *a, float *b);

int main()
{
	float a, b, c;
	float *q, *w, *e;
	scanf("%f,%f,%f", &a, &b, &c);
	q = &a, w = &b, e = &c;
	fun(q, w, e);
	printf("max = %f,mid = %f,min = %f\n", a = *q, b = *w, c = *e);
	return 0;
}

void fun(float * m, float * n, float * k)
{
	if (*m<*n)
	{
		swap(m, n);
	}
	if (*n<*k)
	{
		swap(n, k);
	}
	if (*m<*k)
	{
		swap(m, k);
	}
}

void swap(float *a, float *b)
{
	float temp;
	temp = *a;
	*a = *b;
	*b = temp;
}