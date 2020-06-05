#include <stdio.h>
void main()
{
	char s;
	printf("input a capital:\n");
	scanf_s("%c",&s);
	if (s >= 'A' && s <= 'Z')
		printf("%c\n", s + 32);
	else if (s >= 'a' && s <= 'z')
		printf("%c\n", s);
	else
		printf("input correct!\n");

		
}