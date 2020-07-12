#include <stdio.h>
#include <string.h>
void main()
{
	char str1[] = "Original String";
	char str2[] = "New String";
	char str3[100];

	strcpy_s(str1,sizeof(str1), str2);
	strcpy_s(str3, sizeof(str3),"Copy Successful!");

	printf("str1:%s\n", str1);
	printf("str2:%s\n", str2);
	printf("str3:%s\n", str3);
}