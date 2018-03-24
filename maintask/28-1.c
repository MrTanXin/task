#include <stdio.h>

int reverse(int);

int main()
{
	int i;
	int i_squ;
	int i_back;
	int i_back_squ;
	for ( i = 12; i < 1000; i++)
	{
		i_squ = i * i;
		i_back = reverse(i);
		i_back_squ = i_back * i_back;
		if (reverse(i_back_squ) == i_squ)
		{
			printf("%d为平方镜反数字\n",i);
		}
	}
}

int reverse(int i)
{
	int sum = 0;
	while (i!=0)
	{
		sum =sum*10+ i % 10;
		i /= 10;
	}
	return sum;
}

