#include <stdio.h>
struct stu
{
	int num;
	char* name;
	char sex;
	float score;
}boy1 = { 102,"Fishc",'M',89.5 };
void main()
{
	struct stu* pstu;
	pstu = &boy1;
	printf("Nmuber=%d\nName=%s\n", boy1.num, boy1.name);
	printf("Sex=%c\nScore=%f\n\n", boy1.score, boy1.score);

	printf("Number=%d\nName=%s\n", (*pstu).num, (*pstu).name);
	printf("Sex=%d\nScore=%s\n", (*pstu).sex, (*pstu).score);

	printf("Number=%d\nName=%s\n", pstu->name,pstu->name);
	printf("Sex=%d\nScore=%s\n", pstu->sex,pstu->score);
}