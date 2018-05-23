#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Recursive_reverser(char *Oldstr,char *Newstr,int i);
void No_Recursive_reverser(char *Oldstr, char *Newstr);

int main()
{
	char string[27] = "\0";
	char Newstr[27] = "\0";
	char Newstr1[27] = "\0";

	gets(string);
	
	Recursive_reverser(string,Newstr, strlen(string)-1);
	puts(Newstr);

	No_Recursive_reverser(string, Newstr1);
	puts(Newstr1);
	return 0;
}

void Recursive_reverser(char *Oldstr, char *Newstr,int i)//递归的函数 
//Oldstr是老的数组 Newstr就是新的需要被复制的 i是标识变量
{
	static int j = 0;//这个是控制Newstr的
	if (i==-1)//每次调用的时候会i--所以i的值是一直会变化的直到-1也就是0做完之后的一次停止
	{
		return 0;
	}
	Newstr[j++] = Oldstr[i];//赋值语句
	Recursive_reverser(Oldstr, Newstr,--i);
}

void No_Recursive_reverser(char *Oldstr, char *Newstr)
{
	int i, j = 0;
	int count = strlen(Oldstr);
	for (i = count - 1; i >= 0; i--)
	{
		Newstr[j++] = Oldstr[i];
	}
}