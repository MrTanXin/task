#include <stdio.h>

void print();

struct Student
{
	char ID[10];
	char Name[20];
	double Socre[3];
}stus[10] = {
	{"1","S1"},
	{"2","S2"},
	{"3","S3"},
	{"4","S4"},
	{"5","S5"},
	{"6","S6"},
	{"7","S7"},
	{"8","S8"},
	{"9","S9"},
	{"10","S10"},
};

int main()
{
	int i, j;
	for ( i = 0; i < 10; i++)
	{
		for ( j = 0; j < 3; j++)
		{
			stus[i].Socre[j] = (double)(rand() % 101);
		}
	}

	print();

	return 0;
}

void print()
{
	int i;
	for ( i = 0; i < 10; i++)
	{
		printf("ID = ");
		puts(stus[i].ID);
		printf("Name = ");
		puts(stus[i].Name);
		
		printf("Score = %.2lf,%.2lf,%.2lf\n\n", stus[i].Socre[0], stus[i].Socre[1], stus[i].Socre[2]);
	}
}