#include <stdio.h>
#if 0
void main()//����������
{
	int a[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int i;
	for ( i = 0; i < 10; i++)
	{
		printf("%d\n", *(a + i));
	}
}
#endif
void main()//ָ�����
{
	int a[10] = { 9,8,7,6,5,4,3,2,1,0 },i;
	int* p = a;
	for ( i = 0; i < 10; i++)
	{
		printf("%d", *(p + i));
	}
}