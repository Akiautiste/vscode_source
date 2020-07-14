#include <stdio.h>
#include <string.h>
#if 1
void main() //strncpy用法
{

	char str1[] = "To be or not to be";
	char str2[40];
	strncpy(str2,str1,5);
	str2[5] = '\0';
	printf("str2:%s\n", str2);

	
}
#endif
#if 0
void main() //strncat用法
{

	char str1[40] = "To be or not to be";
	char str2[]="Yes!\n";
	strncat(str1,"  ",1);
	strncat(str1, str2,1);
	printf("str1:%s\n", str1);


}
#endif
#if 0
void main() //strcmp或strncmp用法 返回值，相同取0,str1>str2返回1,str<str2取-1
{
	int f;
	char str1[40] = "FishC.com!";
	char str2[40] = "ac";
	if (f = strcmp(str1, str2))
	{
		printf("两个字符串相同\n");
	}
	else
	{
		printf("两个字符串存在差异\n");
	}

	printf("%d\n", f);


}
#endif