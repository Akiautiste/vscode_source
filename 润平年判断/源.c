#include <stdio.h>
void main()
{
	int a;
	printf("input a year:\n");
	scanf_s("%d", &a);
	if ((!(a % 4) && a % 100) || !(a % 400))//能被400整除的,或能被4整除且不能被100整除的是闰年
		printf("润年\n");
	else
		printf("平年\n");

}