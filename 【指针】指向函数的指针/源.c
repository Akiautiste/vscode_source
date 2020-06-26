#include <stdio.h>
#if 1
void main()
{
	int max(int, int);
	int a, b, c;
	scanf("%d%d", &a, &b);
	c = max(a, b);
	printf("a=%d,b=%d,max=%d\n\n", a, b, c);

}
#endif
int max(int x, int y)
{
	int z;
	if (x > y)
	{
		z = x;
	}
	else
	{
		z = y;
	}
	return z;
}
#if 0
void main()
{
	int max(int, int);
	int (*p)(); //指向函数的指针
	int a, b, c;
	p = max;
	scanf("%d%d", &a, &b);
	c = (*p)(a, b);
	printf("a=%d,b=%d,max=%d\n\n", a, b, c);
}
#endif