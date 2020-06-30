#include <stdio.h>
#include <string.h>
void print(struct student);
struct student
{
	int num;
	char name[20];
	float score[3];
};
void main()
{
	struct student stu;
	stu.num = 8;
	strcpy_s(stu.name,20, "Fishc.com!");
	stu.score[0] = 99;
	stu.score[1] = 98;
	stu.score[2] = 93;
	print(stu);

}
void print(struct student stu)
{
	printf("\tnum      :%d\n", stu.num);
	printf("\tname     :%s\n", stu.name);
	printf("\tscore_1  :%5.2f\n", stu.score[0]);
	printf("\tscore_2  :%5.2f\n", stu.score[1]);
	printf("\tsocre_3  :%5.2f\n", stu.score[2]);
	printf("\n");
}