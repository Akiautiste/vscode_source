#include<stdbool.h>
#include <stdio.h>


int main(int argc, char* argv[])
{
	int year, month, day;
	int i, j;
	int num = 0;
	int a[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };//ƽ��2��28�� 365��
	int b[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };//����2��29�� 366��
	bool x;//�ж��Ƿ�Ϊ����
	printf("������������\n");
	scanf_s("%d%d%d", &year, &month, &day);
	if ((year % 4 == 0) && (year % 100 != 0) || (year % 4 == 0) && (year % 400 == 0))
		x = true;//������
	else
		x = false;//��ƽ��
	if (x)
	{
		for (i = 0; i < month - 1; i++)
			num += b[i];

		num = num + day;
	}
	else
	{
		for (j = 0; j < month - 1; j++)
			num += a[j];

		num += day;
	}
	printf("������%d��ĵ�%d��\n", year, num);
	return 0;
}