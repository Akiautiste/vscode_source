#include <stdio.h>
void main()
{
	int max(int x, int y);
	int min(int x, int y);
	int add(int x, int y);
	void process(int x, int y, int(*fun)());
	int a, b;
	printf("Enter a and b:");
	scanf("%d %d", &a, &b);
	printf("max=");
	process(a, b, max);
	printf("min=");
	process(a, b, min);
	printf("add=");
	process(a, b, add);

}
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
int min(int x, int y)
{
	int z;
	if (x > y)
	{
		z = y;
	}
	else
	{
		z = x;
	}
	return z;
}
int add(int x, int y)
{
	return x + y;
}
void process(int x, int y, int(*fun)())
{
	if (fun == max)
	{
		max
	}
}