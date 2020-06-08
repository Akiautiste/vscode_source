#include <stdio.h>
void main()
{
	int a[3][4] = { 0 }, max = a[0][0], i, j, r,c,f=0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("input row %d and colum %d nubmer:\n",i+1,j+1);
			scanf_s("%d", &a[i][j]);
		}
	}
	for (i = 0; i < 3; i++)
	{
		for ( j = 0; j < 4; j++)
		{
			if (max < a[i][j])
			{
				max = a[i][j];
				r = i+1 ;
				c = j+1 ;
				f = 1;
			}
		}
	}
	if (f)
		printf("max number is : %d,row is %d,colum is %d", max, r, c);
	else
		printf("max number is %d,row is 1,colum 1\n", a[0][0]);
}