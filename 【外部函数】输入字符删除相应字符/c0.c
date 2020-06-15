#include <stdio.h>

void main()
{
	extern void enter_string(char str[]);
	extern void delete_string(char str[], char sh);
	extern void print_string(char str[]);
	char c;
	char str[80];
	enter_string(str);
	scanf_s("%c", &c);
	delete_string(str, c);
	print_string(str);
}