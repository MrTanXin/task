#include <stdio.h>

void print();

struct Student
{
	char ID[10];
	char Name[20];
	double Socre[3];
}stus[10] = {
	{"1","Student1"},
	{"2","Student2"},
	{"3","Student3"},
	{"4","Student4"},
	{"5","Student5"},
	{"6","Student6"},
	{"7","Student7"},
	{"8","Student8"},
	{"9","Student9"},
	{"10","Student10"},
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
	int i, j;
	for ( i = 0; i < 10; i++)
	{
		printf("ID = ");
		puts(stus[i].ID);
		printf("Name = ");
		puts(stus[i].Name);
		
		printf("Score = %.2lf,%.2lf,%.2lf\n\n", stus[i].Socre[0], stus[i].Socre[1], stus[i].Socre[2]);
	}
}