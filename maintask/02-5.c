#include <stdio.h>

int main()
{
	float rate = 0.0225;
	int n;
	float capital, deposit;

	printf("rate,n,capital");
	scanf("%f,%d,%f", &rate, &n, &capital);
	deposit = capital * (1 + rate)*n;
	printf("desposit = %f", deposit);
	
	return 0;
}