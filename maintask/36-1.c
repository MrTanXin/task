#include <stdio.h>

struct Student
{
	char id[10];
	char Name[20];
	double Score[3];
};

int main()
{
	struct Student stu1;
	
	printf("ID:");
	gets(stu1.id);
	
	printf("Name:");
	gets(stu1.Name);

	printf("Score:XX,XX,XX:");
	scanf("%lf,%lf,%lf", &stu1.Score[0], &stu1.Score[1], &stu1.Score[2]);

	printf("\n");

	printf("ID\tName\tscore\n");
	printf("%s\t%s\t%.0f %.0f %.0f\n", stu1.id, stu1.Name, stu1.Score[0], stu1.Score[1], stu1.Score[2]);

	return 0;
}

