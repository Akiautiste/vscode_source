#include <stdio.h> 
void main()
{
	int a[3][3], i, j,f=1;
	for ( i = 0; i < 3; i++)
	{
		for ( j = 0; j < 3; j++)
		{
			printf("input No.%d number:\n",f);
			scanf_s("%d", &a[i][j]);
			f += 1;
		}
		
	}
	for (i = 0; i < 3; i++)     //¼ûÏÂ·½×¢ÊÍ
	{
		for (j = 0; j < 3; j++)       
		{
			if (i == 0 && j == 0)

			printf("  ");
			else if(i==0&& j==2)
				printf("  ");
			else if (i == 2 && j == 0)
				printf("  ");
			else if (i == 2 && j == 2)
				printf("  ");
			else
		printf("%d ", a[i][j]);
		}
		printf("\n");

	}
}
/*
for ( i = 0; i < 3; i++)
{
	for	( j = 0; j < 3; j++)
	{	if(i==1||j==1)
	     {
			printf("%-6d", a[i][j]);
		

		
	     }
	}
		else
		{
			printf("%-6c",' ');
		}
	printf("\n");
}
*/
