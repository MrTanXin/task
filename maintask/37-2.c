#include <stdio.h>

void print();
void insert();
void del();
int count = 4;

struct Student
{
	char ID[10];
	char Name[20];
	double Socre[3];
};
struct Student stus[10] = {
				{ "1","Student1" },
				{ "2","Student2" },
				{ "3","Student3" },
				{ "4","Student4" },
			};

int main()
{
	int i, j;
	for (i = 0; i < count; i++)
	{
		for (j = 0; j < 3; j++)
		{
			stus[i].Socre[j] = (double)(rand() % 101);
		}
	}

	print();
	insert();
	del();
	return 0;
}

void print()
{
	int i, j;
	system("cls");
	for (i = 0; i < count; i++)
	{
		printf("ID = ");
		puts(stus[i].ID);
		printf("Name = ");
		puts(stus[i].Name);

		printf("Score = %.2lf,%.2lf,%.2lf\n\n", stus[i].Socre[0], stus[i].Socre[1], stus[i].Socre[2]);
	}
}

void insert()
{
	struct Student newdata;
	printf("\n\ninsert:\n");
	printf("ID:");
	scanf("%s", newdata.ID);
	printf("Name:");
	scanf("%s", newdata.Name);
	printf("score:");
	scanf("%lf,%lf,%lf", &newdata.Socre[0], &newdata.Socre[1], &newdata.Socre[2]);
	
	stus[count] = newdata;

	count++;

	print();
}

void del()
{
	int i,j;
	char num[10] = "\0";
	system("cls");
	print();
	printf("\n\ndel:\n");
	printf("请输入用户学号");
	scanf("%s", &num);

	for ( i = 0; i < count; i++)
	{
		if (strcmp(num,stus[i].ID)==0)
		{
			for ( j = i; j < count; j++)
			{
				stus[j] = stus[j + 1];
			}
		}
	}
	count--;
	print();
}