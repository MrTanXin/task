#include <stdio.h>
#include <math.h>
int check(int);
int main()
{
	for (size_t i = 100; i < 1000; i++)//100-1000循环
	{
		int result = 0;
		if (i/100==i%10)//求是不是个回文，是的话继续向下，不是的话回到上面的for语句 做i++
		{
			result=check(i);//一个check函数 判断是不是个素数 是的话返回0，不是返回1
			if (result==0)
			{
				printf("%d\t", i);//经过俩次判断都过的那么就既是回文又是素数，那么就输出
			}
		}
	}
	return 0;
}

int check(int s)
{
	for (size_t i = 2; i <= sqrt(s); i++)
	{
		if (s%i==0)
		{
			return -1;
		}
	}
	return 0;
}