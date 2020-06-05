#include <stdio.h>
void main()
{
	float a, b;
	signed char op;
	printf("input a function:\n");
	scanf_s("%f%c%f",&a,&op,64,&b);
	switch(op)
	{
	case'+':
		printf("%lf\n", a + b);
		break;
	case'-':
		printf("%lf\n", a - b);
		break;
	case'*':
		printf("%lf\n", a * b);
		break;
	case'/':
		if (b)
			printf("%lf\n", a / b);
		else
			printf("error!\n");
		break;
	default:
		printf("error!\n");
		break;
	}
}