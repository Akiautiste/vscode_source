#include <stdio.h> //不支持
#include <stdlib.h>
int main()
{
	int a[10], i;
	for ( i = 0; i <= 9; i++)
	{
		a[i] = i;
	}
	for ( i = 0; i <= 9; i++)
	{
		printf("%d", a[i]);
	}
    system("pause");
    return 0;
}