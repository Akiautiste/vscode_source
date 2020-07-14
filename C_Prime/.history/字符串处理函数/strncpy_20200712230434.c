#include <stdio.h>
#include  <stdlib.h>
void main()
{
	FILE* f_pic, * f_file, * f_finish;
	char pic_name[20], file_name[20], finish_name[20],ch;
	printf("Please enter need to integrate picture and file name:\n");
	printf("picture:");
	scanf_s("%s", pic_name, 20);
	printf("file:");
	scanf_s("%s", file_name, 20);
	printf("product name:");
	scanf_s("%s", finish_name, 20);

	if (fopen_s(&f_pic,pic_name,"rb"))
	{
		printf("Cannot open the picture");
		return;
	}
	if (fopen_s(&f_file, file_name, "rb"))
	{
		printf("Cannot open the file %s !", file_name);
		return;
	}
	if (fopen_s(&f_finish, finish_name, "wb"))
	{
		printf("Cannot open the file %s !", finish_name);
		return;
	}

	while (!(feof(f_pic)))
	{
		ch = fgetc(f_pic);
		fputc(ch, f_finish);
	}
	fclose(f_pic);

	while (!(feof(f_file)))
	{
		ch = fgetc(f_file);
		fputc(ch, f_finish);
	}
	fclose(f_file);
	fclose(f_finish);

	system("pause");
}