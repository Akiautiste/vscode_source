#include <stdio.h>
#include <stdlib.h>

void main()
{
	FILE* fp;
	if ((fopen_s(&fp,"E:\\2.txt", "rb")))
	{
		printf("Can not open E:\\2.txt file !\n");
		system("pause");
	}
	else
	{
		printf("Open success!\n");
	}
}