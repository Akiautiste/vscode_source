#include <stdio.h>
void main()
{
	int a;
	printf("input a year:\n");
	scanf_s("%d", &a);
	if ((!(a % 4) && a % 100) || !(a % 400))//�ܱ�400������,���ܱ�4�����Ҳ��ܱ�100������������
		printf("����\n");
	else
		printf("ƽ��\n");

}