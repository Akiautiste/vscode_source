#include <stdio.h>
#define PIN1 char*
typedef char* PIN2;
void main()
{
	PIN1 x, y;
	PIN2 a, b;   //ָ�����ռ4���ֽڣ��ַ�ռ1���ֽ�
	printf("By #define : %d %d\n\n ", sizeof(x), sizeof(y));
	printf("By typedef: %d %d\n\n", sizeof(a), sizeof(b));
}