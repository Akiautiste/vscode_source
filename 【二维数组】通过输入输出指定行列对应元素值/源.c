#include <stdio.h>
void main()
{
	int a[3][4] = { 1,3,44,566,42,674,23,67,21,9,6123,12};
	int(*p)[4],i,j;
	p = a;
	printf("In put row_no and column_no:\n");
	scanf_s("%d %d", &i, &j);
	printf("a[%d][%d]:%d\n", i - 1, j - 1, *(*(p + i - 1) + j - 1));

}