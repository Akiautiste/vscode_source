#include <stdio.h>
int max, min;
void max_min_value(int array[], int n);
void main()
{
	int i, number[10];
	printf("enter 10 integer numbers:\n");
	for ( i = 0; i < 10; i++)
	{
		scanf_s("%d", &number[i]);
	}
	max_min_value(number, 10);
	printf("\nmax=%d,min=%d\n", max, min);
}
#if 0

void max_min_value(int array[], int n) //数组做参数
{
	int* p, *array_end;
	array_end = array + n-1;
	max = min = *array;
	for ( p = array+1; p <= array_end; p++)
	{
		if (*p > max)
		{
			max = *p;
		}
		else if (*p < min)
		{
			min = *p;
		}

	}
}

#endif
void max_min_value(int *x, int n)//指针变量做参数
{
	int *q=x+n-1;
	min = max = *x;
	for (x ; x <= q; x++)
	{
		if (*x > max)
		{
			max = *x;
		}
		else if (*x < min)
		{
			min = *x;
		}

	}
}
