#include <stdio.h>
#if 0
void main()  //�ַ�����������
{
	void copy_string(char from[], char to[]);
	char a[] = "I am a teacher.";
	char b[] = "You are a student.";
	printf("string a=%s\nstring b=%s\n", a, b);
	printf("copy string a to string b:\n");
	copy_string(a, b);
	printf("\nstring a=%sstring b=%s\n", a, b);

}

void copy_string(char from[], char to[])
{
	int i = 0;
	while (from[i] != '\0')
	{
		to[i] = from[i];
		i++;
	}
	to[i] = '\0';
}
#endif
void main()  //�ַ�ָ��������β�
{
	void copy_string(char* from, char* to);
	char* a = "I am a teacher.";
	char* b = "You are a student."; // ���ڴ泣�������ַ�����ֵ��bָ�룬ʹ��bָ������ݲ���д
	printf("String a=%s\nString b=%s\n", a, b);
	printf("copy string a to string b:\n");
	copy_string(a, b);
	printf("\nString a=%s\nString b=%s\n", a, b);

}
void copy_string(char* from, char* to)
{
	for (; *from != '\0'; from++, to++)
	{
		*to = *from;

	}
	*to = '\0';
}