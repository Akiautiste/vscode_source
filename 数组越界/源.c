#include <stdio.h> //²»Ö§³Ö
void main()
{
	int a = [10], i;
	for ( i = 0; i <= 10; i++)
	{
		a[i] = i;
	}
	for ( i = 0; i <= 10; i++)
	{
		printf("%d", a[i]);
	}
}