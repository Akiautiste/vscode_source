#include <stdio.h>
void move(char x, char y);
void hanoi(int n, char one, char two, char three);//对move函数的声明
void main()
{
	int m;
	printf("input the number of diskes:");
	scanf_s("%d", &m);
	printf("The step to moving %d diskes:\n", m);
	hanoi(m, 'A', 'B', 'C');
}
void hanoi(int n, char one, char two, char three)//定义hanoi函数，将n个盘从one座借助two座，移到three座
{
	if (n == 1) move(one, three);
	else
	{
		hanoi(n - 1, one, three, two);
		move(one, three);
		hanoi(n - 1, two, one, three);

	}
	
}
void move(char x, char y)
{
	printf("%c-->%c\n", x, y);
}