#include <stdio.h>
int A;
int power(int n);
void main()
{
	
	int b = 3, c, result, m;
	printf("enter the number Aand its power m:\n");
	scanf_s("%d %d", &A, &m);
	c = A * b;
	printf("%d*%d=%d\n", A, b, c);
	result = power(m);
	printf("%d^%d=%d\n", A, m, result);
}
