#include <stdio.h>
void main()
{
	int a[3][3] = { {1,2,3},
					{4,5,6} },
	b[3][3], i, j;
	for (i = 0; i < 3; i++)
	{
		

		for (j = 0; j < 3; j++)
		{
			b[i][j] = a[j][i];
		}
	}
	for ( i = 0;i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", b[i][j]);

		}
		printf("\n");
	}
}