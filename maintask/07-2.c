#include <stdio.h>

int main()
{
	int numSum = 0;
	int i=1;
	int j=1;
	int tempSum = 1;
	while(i < 10)
	{
		tempSum = 1;
		j = 1;
		while(j <= i) 
		{
			tempSum *= j;
			j++;
		}
		numSum += tempSum;
		i += 2;
	}
	printf("s = %d\n", numSum);
	return 0;
}