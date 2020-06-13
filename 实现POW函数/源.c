#include <stdio.h>
void main()
{
	int a, b,i,s=1;
	printf("input a\n");
	scanf_s("%d", &a);
	printf("input b\n");
	scanf_s("%d", &b);
	for ( i = 0; i < b; i++)
	{
		s = s * a;
		
	}
	printf("%d",s);
}