#include <stdio.h>
#include <string.h>

void convert(int m, int k, char a[]);
void reverse(char a[]);

int main()
{
	char a[10] = "\0";
	int m, k;
	scanf("%d,%d", &m, &k);
	convert(m, k, a);
	return 0;
}

void convert(int m, int k, char a[])
{
	int ans;
	int count = 0;
	while (m>0)
	{
		ans = m % k;
		m /= k;
		a[count++] = ans + 48;
	}
	reverse(a);
	puts(a);
}

void reverse(char a[])
{
	int max = strlen(a) - 1;
	int i;
	char t;
	for ( i = 0; i <= max/2; i++)
	{
		t = a[i];
		a[i] = a[max - i];
		a[max - i] = t;
	}
}
