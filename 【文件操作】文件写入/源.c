#include <stdio.h>
#include <stdlib.h>
void main()
{
	FILE* fp;
	char ch, filename[20];
	printf("Please input the filename you wan to write:");
	scanf_s("%s", filename, 20);

	if ((fopen_s(&fp,filename,"wt+")))
	{
		printf("Cannot open the file !\n");
		exit(0);

	}
	printf("Please input the sentences you want to write:");
	ch = getchar();
	ch = getchar(); //吸收回车符号
	while (ch!=EOF)
	{
		fputc(ch, fp);
		ch = getchar();
	}
	fclose(fp);
}