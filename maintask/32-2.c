#include <stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
	char a[100];
	int num[100], k, m;
	
	printf("please input:");
	gets(a);
	k = count(a, num);
	printf("There are %d numbers\n", k);
	
	for (m = 0; m<k; m++)
		printf("%d\t", num[m]);
	printf("\n");
	
	return 0;
}

int count(char *a, int *num)
{
	int i, j = 0;
	
	for (i = 0; i<strlen(a); i++)
		if (isdigit(*(a + i)))
		{
			*(num + j) = 0;
			while (isdigit(*(a + i)) && *(a + i) != '\0')
			{
				*(num + j) = *(num + j) * 10 + *(a + i) - '0';
				i++;
			}
			j++;
		}
	
	return j;

}