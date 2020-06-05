#include <stdio.h>
void main()
{
	int score;
	printf("input a number(between 0 and 100):\n");
	scanf_s("%d", &score);
	while (score > 0 && score <100)
	{
		if (score < 60)
			printf("E\n");
		else if (score < 70)
			printf("D\n");
		else if (score < 80)
			printf("C\n");
		else if (score < 90)
			printf("B\n");
		else
			printf("A\n");
		return 0;
	}
	printf("number not correct!\n");
}