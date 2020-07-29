#include <stdio.h>
#include <string.h>
#include <stdarg.h>
//字符常量
#if 0
void main()
{
	int i;
	const char string[] = "abcdefgh";
	const char* p = string;
	printf("%p\n", string);
	printf("%p\n", p);

	printf("%s\n", string);
	printf("%s\n", p);

	int length = strlen(p);
	printf("%d\n", length);
	printf("%s\n", p);
	for ( i = 0; i < length; i++)
	{
		printf("%c\n", *(p + i));
	}
}
#endif
 //函数传值和传址
#if 0
void get_array(int b[10]);  
void get_array(int b[10])   //只传递了a的首地址给b
{
	printf("sizeof b:%d\n", sizeof(b));

}
int main()
{
	int a[10] = { 1,2,3,4,5,6,7,8,9,0 };

	printf("sizeof a:%d\n", sizeof(a));
	get_array(a);
}
#endif
//可变参数列表
#if 0
int sum(int n, ...);
int sum(int n, ...)
{
	int i, sum = 0;
	va_list vap;
	va_start(vap, n);
	for ( i = 0; i < n; i++)
	{
		sum += va_arg(vap, int);
	}
	va_end(vap);

	return sum;
}
int main()
{
	int result;
	result = sum(3, 1, 2, 3);
	printf("result=%d\n", result);

	result = sum(5, 1, 2, 3,4,5);
	printf("result=%d\n", result);

	result = sum(6, 3, -1, -2,4,99,1);
	printf("result=%d\n", result);

	return 0;
}
#endif
//输出字符数组
#if 0
int main()
{
	char a[] = "1,2,3,4,5,6";
	int length,i;
	length = strlen(a);
	printf("%d\n", length);
	for ( i = 0; i < length; i++)
	{
		printf("%d\n",*(a + i));
		
	}
}
#endif
//指针函数
#if 0
char  *getWord(char c);

char  *getWord(char c)
{
	switch (c)
	{
	case 'A':return 'A';
	case 'B':return "Ba";
	case 'C':return "Ca";
	case 'D':return "Da";

	default:
		return "None";
	}
}

int main()
{
	char input;

	printf("Please input a character:\n");
	scanf("%c", &input);

	printf("%c\n", getWord(input));
}
#endif
//函数指针
#if 0
int square(int num);
int square(int num)
{
	return num * num;
}
int main()
{
	int num;
	int (*fp)(int);

	printf("Please input a integer:\n");
	scanf("%d", &num);

	fp = square;
	printf("%d*%d=%d\n", num, num, (*fp)(num));

	return 0;
}
#endif
//嵌套函数指针
#if 0
int add(int, int);
int sub(int, int);
int calc(int(*fp)(int, int), int, int);

int add(int num1, int num2)
{
	return num1 + num2;

}
int sub(int num1, int num2)
{
	return num1 - num2;
}
int calc(int (*fp)(int, int), int num1, int num2)
{
	return (*fp)(num1, num2);
}
int main()
{
	printf("3+5=%d\n", calc(add, 3, 5));
	printf("6-2=%d\n", calc(sub,6, 2));

	return 0;
}
#endif

//返回值为函数指针的函数
#if 0
int add(int, int);
int sub(int, int);
int calc(int(*)(int, int), int, int);
int (*select(char))(int, int);

int add(int num1, int num2)
{
	return num1 + num2;	
}
int sub(int num1, int num2)
{
	return num1 + num2;
}
int calc(int (*fp)(int, int), int num1, int num2)
{
	return (*fp)(num1, num2);
}
int (*select(char op))(int, int)  //select是一个
{
	switch (op)
	{
	case '+': return add;
	case '-':return sub;
	default:
		break;
	}
}
int main()
{
	int num1, num2;
	char op;
	int (*fp)(int, int);

	printf("Please input a formula:\n ");
	scanf("%d %c %d", &num1, &op, &num2);
	fp = select(op);
	printf("%d %c %d=%d\n", num1, op, num2, calc(fp, num1, num2));
}
#endif
#if 0
int main()
{
	float a = 0.00001;
	float b = 30000000;
	float c = 12.84;
	float d = 1.229338455;
	printf("a=%g \nb=%g \nc=%g \nd=%g\n", a, b, c, d);

	return 0;
}
#endif
#include <stdio.h>
#include <windows.h>
//设置光标位置
void setCursorPosition(int x, int y);
//设置文字颜色
void setColor(int color);
int main() {
	setColor(3);
	setCursorPosition(3, 3);
	puts("★");
	setColor(0XC);
	setCursorPosition(1, 1);
	puts("◆");
	setColor(6);
	setCursorPosition(6, 6);
	puts("■");
	return 0;
}
//自定义的光标定位函数
void setCursorPosition(int x, int y) {
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
//自定义的文字颜色函数
void setColor(int color) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}