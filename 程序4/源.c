#include<stdbool.h>
#include <stdio.h>


int main(int argc, char* argv[])
{
	int year, month, day;
	int i, j;
	int num = 0;
	int a[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };//平年2月28天 365天
	int b[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };//闰年2月29天 366天
	bool x;//判断是否为闰年
	printf("请输入年月日\n");
	scanf_s("%d%d%d", &year, &month, &day);
	if ((year % 4 == 0) && (year % 100 != 0) || (year % 4 == 0) && (year % 400 == 0))
		x = true;//是闰年
	else
		x = false;//是平年
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
	printf("今天是%d年的第%d天\n", year, num);
	return 0;
}