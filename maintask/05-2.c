#include <stdio.h>

int main()
{
	int num;
	const int price = 20;
	scanf("%d", &num);

	switch (num/5)
	{
	case 0:
		printf("%.2f", num*price);
		break;
	case 1:
	case 2:
		printf("%.2f", num*price*0.9);
		break;
	case 3:
	case 4:
		printf("%.2f", num*price*0.85);
		break;
	case 5:
	case 6:
		printf("%.2f", num*price*0.8);
		break;
	default:	
		printf("%.2f", num*price*0.75);
		break;
	}

	return 0;
}