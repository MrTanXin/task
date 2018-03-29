#include <stdio.h>
#include <math.h>

int main()
{
	int numSum = 1;
	int i = 2;
	while(i <= 8)
	{
		numSum *= i;
		i++;
	}
	printf("8! = %d\n", numSum);
	return 0;
}