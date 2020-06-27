#include <stdio.h>
#define PIN1 char*
typedef char* PIN2;
void main()
{
	PIN1 x, y;
	PIN2 a, b;   //指针变量占4个字节，字符占1个字节
	printf("By #define : %d %d\n\n ", sizeof(x), sizeof(y));
	printf("By typedef: %d %d\n\n", sizeof(a), sizeof(b));
}