#include <stdio.h>
#include <stdlib.h>

void move_NO_Recursive(int *a, int offset);
void backonce(int *a);
void move_Recursive(int *a, int offset);

int main()
{
	int i;
	int a[10];
	int offset;
	printf("offset = ");
	scanf("%d", &offset);
	printf("Ô´:\t");
	for ( i = 0; i < 10; i++)
	{
		a[i] = rand() % 101;
		printf("%d ", a[i]);
	}
	printf("\n");
	printf("·ÇµÝ¹é:\t");
	move_NO_Recursive(a,offset);
	printf("\n");
	printf("µÝ¹é:\t");
	move_Recursive(a, offset);

	for ( i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	return 0;
}

void move_NO_Recursive(int *a,int offset)
{
	int temp;
	int i;
	int b[10];
	for ( i = 0; i < 10; i++)
		b[i] = a[i];
	
	for ( i = 0; i < offset; i++)
	{
		temp = b[9];
		backonce(b);
		b[0] = temp;
	}

	for ( i = 0; i < 10; i++)
	{
		printf("%d ", b[i]);
	}

}

void backonce(int a[])
{
	int i;
	for ( i = 8; i >= 0; i--)
	{
		a[i + 1] = a[i];
	}
}

void move_Recursive(int *a, int offset)
{
	int temp;
	if (offset == 0)
	{
		return 0;
	}
	else
	{
		temp = a[9];
		backonce(a);
		a[0] = temp;
	}
	move_Recursive(a, --offset);
}