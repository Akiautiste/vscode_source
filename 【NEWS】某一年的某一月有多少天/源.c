#include <stdio.h>
int main()
{
	int year = 0,month=0;
	printf("���������:\n");
	scanf("%d", &year);
	printf("�������·�:\n");
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
        printf("��31��\n");
		break;
	
	case 4:
    case 6:
	case 9:
	case 11:
	case 2:
		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
			printf("��29��\n");
		else
			printf("��28��\n");
		break;
	default:
		printf("�������\n");
		break;
	}
	

		while (1) {  //��ѭ��
			malloc(10240);  //����1024���ֽڵ��ڴ�
		}
		return 0;



}