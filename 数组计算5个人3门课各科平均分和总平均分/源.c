#include <stdio.h>
void main()
{
	int a[5][3], i, j;
	float sum_m = 0.0f, sum_c = 0.0f, sum_f = 0.0f;
	char *b[3] = { "Math","C","Foxpro" },
		 *c[5] = { "zhang","wang","li","zhao","zhou" };

	for (i = 0; i < 5; i++)
	{
		

		for (j = 0; j < 3; j++)
		{
			printf("input %s score of %s:\n", c[i],b[j]);
			scanf_s("%d", &a[i][j]);
				

		}
		sum_m = sum_m + a[i][0];
		sum_c = sum_c + a[i][1];
		sum_f = sum_f + a[i][2];
	}
	printf("Math's average socores:%f\n",sum_m/5);
	printf("C's average socores:%f\n", sum_c / 5);
	printf("Foxpro's average socores:%f\n", sum_f / 5);
	printf("Total's average socores:%f\n", (sum_m+ sum_c+ sum_f) / 3);
}