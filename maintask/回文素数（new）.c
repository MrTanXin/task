#include <stdio.h>
int main()
{
	int num,i;
	int flag = 0;
	for ( num = 100; num < 1000; num++)
	{
		if (num/100!=num%10)
		{
			continue;
		}
	
		for ( i = 2; i < num/2; i++)
		{
			if (num%i==0)
			{
				break;
			}
		}
		
		if ((i+1)>num/2)
		{
			printf("%d\t", num);
		}
	}
	
	return 0;
}