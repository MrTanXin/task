#include <stdio.h>
#include <stdlib.h>

struct Student
{
	int ID;
	char Name[20];
	int score;
};

int main()
{
	int n, i;
	scanf("%d", &n);

	struct Student *stu = NULL;
	stu = malloc(n * sizeof(struct Student));

	for ( i = 0; i < n; i++)
	{
		(stu+i)->ID = i;
	}

	return 0;
}