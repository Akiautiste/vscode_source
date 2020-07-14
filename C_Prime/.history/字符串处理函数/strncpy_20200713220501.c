#include <stdio.h> //不支持
#include <stdlib.h>
int main()
{
	int a[10], i;
	for ( i = 0; i <= 10; i++)
	{
		a[i] = i;
	}
	for ( i = 0; i <= 10; i++)
	{
		printf("%d\n", a[i]);
	}
    system("pause");
    return 0;
}