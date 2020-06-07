#include <stdio.h>
void main()
{
	int a[20] = { 1,1 }, i;
	for (i = 0; i < 20; i++)
	{
		
		if (i >= 2)
			a[i] = a[i - 1] + a[i - 2];
		printf("%d\n", a[i]);

	}
}