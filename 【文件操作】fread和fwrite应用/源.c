#include <stdio.h>
#define SIZE 4
struct student
{
	char name[10];
	int num;
	int age;
	char addr[15];

}stu[SIZE];

void save()
{
	FILE* fp;
	int i;
	if (fopen_s(&fp, "student_list", "wb"))
	{
		printf("Cannot open the file!\n");
		return;
	}

	for (i = 0; i < SIZE; i++)
	{
		if (fwrite(&stu[i], sizeof(struct student), 1, fp)!=1)
		{
			printf("File write error!\n");
			fclose(fp);
		}
	}
}

void main()
{
	int i;
		printf("Please input the student's name,num,age and address:\n");
	for ( i = 0; i < SIZE; i++)
	{
		scanf_s("%s %d %d %s", stu[i].name,10,&stu[i].num, &stu[i].age, &stu[i].addr,15);
	}
	save();
}

void load()
{
	FILE* fp;
	int i;
	if (fopen_s(&fp, "student-list", "r"))
	{
		printf("Cannot open the file !\n");
		return;

	}
	for ( i = 0; i < SIZE; i++)
	{
		fread(&stu[i], sizeof(struct student), 1, fp);
	}
	fclose(fp);
}