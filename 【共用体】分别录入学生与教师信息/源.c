#include <stdio.h>  //注意scanf_s用法
#if 1
struct n
{
	int num;
	char name[10];
	char job;
	union
	{
		int Class;
		char position[10];
	}category;
}person[2];

main()
{
	int i;
	for (i = 0; i < 2; i++)
	{
		printf("input the data\n");
		scanf_s("%d %s %c", &person[i].num,person[i].name,10, &person[i].job,2);  //注意字符串的输入格式
		if (person[i].job == 's')
		{
			printf("input Class\n");
			scanf_s("%d", &person[i].category.Class);
		}
		else if (person[i].job == 't')
		{
			printf("input position\n");
			scanf_s("%s", person[i].category.position,10);  //格式注意了哈
		}
		else
			printf("data error\n");
	};
	for (i = 0; i < 2; i++)
	{
		if (person[i].job == 's')
			printf("%-5d %-10s %-4c %-10d\n", person[i].num, person[i].name, person[i].job, person[i].category.Class);
		else
			printf("%-5d %-10s %-4c %-10s\n", person[i].num, person[i].name, person[i].job, person[i].category.position);
	}
}
#endif
#if 0
#include<stdio.h>
#include<stdlib.h>
main()
{
	char ch[20], chi;
	//scanf_s("%s %c", ch, &chi);
	//printf("%s,%c", ch, chi);
	scanf_s("%s",ch,20);
	printf("%s\n", ch);
	scanf_s(" %c",&chi);
	printf("%c",chi);
	system("pause");
}
#endif
#if 0
int main() {
	char str1[30] = { 0 };
	char str2[30] = { 0 };
	char str3[30] = { 0 };
	//gets() 用法
	printf("Input a string: ");
	gets(str1);
	//scanf() 用法
	printf("Input a string: ");
	scanf_s("%s", str2);
	scanf_s("%s", str3);

	printf("\nstr1: %s\n", str1);
	printf("str2: %s\n", str2);
	printf("str3: %s\n", str3);
	return 0;
}
#endif