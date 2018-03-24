#include <stdio.h>
void draw(int);
int main()
{
	int n = 5; 
	draw(n);
	return 0;
}

void draw(int n)
{
	if (n==0)
	{
		return 0;
	}
	int i = n;
	for ( i = n; i > 0; i--)
	{
		printf("%c",(48 + n));
	}
	printf("\n");
	return draw(n - 1);
}