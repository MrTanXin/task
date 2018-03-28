#include <stdio.h>

void fun2();

int main()
{
	float x = 2.5, y = 4.7;
	int a = 7;
	int temp = a % 3;
	float re = x + (int)(temp * (x + y) )% 2 / 4;
	printf("x+a\%3\*(x+y)%2/4 = %f\n",re );

	fun2();

	return 0;
}

void fun2()
{
	int a = 2, b = 3;
	float x = 3.5, y = 2.5;

	printf("\(float\)\(a+b\)/2+\(int\)x\%\(int\)y=%f\n", (float)(a + b) / 2 + (int)x % (int)y);

}