#include <stdio.h>
#include <string.h>
#if 1
void main() //strncpy�÷�
{

	char str1[] = "To be or not to be";
	char str2[40];
	strncpy(str2,str1,5);
	str2[5] = '\0';
	printf("str2:%s\n", str2);

	
}
#endif
#if 0
void main() //strncat�÷�
{

	char str1[40] = "To be or not to be";
	char str2[]="Yes!\n";
	strncat(str1,"  ",1);
	strncat(str1, str2,1);
	printf("str1:%s\n", str1);


}
#endif
#if 0
void main() //strcmp��strncmp�÷� ����ֵ����ͬȡ0,str1>str2����1,str<str2ȡ-1
{
	int f;
	char str1[40] = "FishC.com!";
	char str2[40] = "ac";
	if (f = strcmp(str1, str2))
	{
		printf("�����ַ�����ͬ\n");
	}
	else
	{
		printf("�����ַ������ڲ���\n");
	}

	printf("%d\n", f);


}
#endif