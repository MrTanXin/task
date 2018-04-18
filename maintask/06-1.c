#include <stdio.h>

int main()
{
	int num;
	scanf("%d", &num);

	if ((num/10000==num%10)&&(num/1000%10 == num/10%10))
	{
		printf("%d  回文", num);
	}
	else
	{
		printf("%d不回文", num);
	}
	
	return 0;
}