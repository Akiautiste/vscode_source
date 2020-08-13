#include <stdio.h>
int main()
{
	int year = 0,month=0;
	printf("请输入年份:\n");
	scanf("%d", &year);
	printf("请输入月份:\n");
	scanf("%d", &month);
	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
        printf("有31天\n");
		break;
	
	case 4:
    case 6:
	case 9:
	case 11:
	case 2:
		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
			printf("有29天\n");
		else
			printf("有28天\n");
		break;
	default:
		printf("输入错误！\n");
		break;
	}
	

		while (1) {  //死循环
			malloc(10240);  //分配1024个字节的内存
		}
		return 0;



}