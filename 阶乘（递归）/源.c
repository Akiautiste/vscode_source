#include <stdio.h>
#if 0
void main()
{
	int a = 2, b = 3,s;
	int factorial(int x);

	s = factorial(2) + factorial(3);
	printf("%d", s);
}
int factorial(int x)
{
	int r = 1;
	r *= x;
	
	if (x != 0)
	{
		factorial(x);
		--x;
	}
	return r;
}
#endif
long recursion(int n);
void main()
{
	int n;
	long result;
	printf("input a integer number:\n");
	scanf_s("%d", &n);
	result = recursion(n);
	printf("%d!=%ld\n", n, result);

}
long recursion(int n)
{
	long temp_result;
	if (n < 0)
	{
		printf("n<0,input error!\n");

	}
	else if (n == 0 || n == 1)
	{
		temp_result = 1;

	}
	else
	{
		temp_result = recursion(n - 1) * n;
	}
	return temp_result;
}
