#include <stdio.h>

int main()
{
	int numFz = 2, numFm = 1;
	int temp = 0;
	float numTemp = 0, numSum = 0;
	int count = 0;
	do
	{
		numTemp = numFz*1.0 / numFm;
		numSum += numTemp;
		count++;
		temp = numFm;
		numFm = numFz;
		numFz = temp + numFm;
	} while (count<10);
	printf("%f", numSum);
	return 0;
}