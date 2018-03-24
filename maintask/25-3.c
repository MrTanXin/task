#include <stdio.h>
int gcd(int m,int n);
int main()
{
	int result ;
	int m,n;
	scanf("%d,%d",&m,&n);
	result = gcd(m,n);
	printf("%d",result);
	return 0;
}

int gcd(int m,int n)
{
	int r=m%n;
	if(r!=0)
	{
		m=n;
		n=r;
		gcd(m,n);
	}
	return n;
}