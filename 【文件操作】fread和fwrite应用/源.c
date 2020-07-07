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

	}
}
